#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include "BigInteger.h"


using namespace std;

BigInteger::BigInteger(long long number) {
  stringstream ss;
  ss << number;
  string str = ss.str();
  size = (int)str.size();
  convertStringIntoInts(str);
};


BigInteger::BigInteger(const char *digit) {
  size = (int)strlen(digit);
  string str = digit;
  convertStringIntoInts(str);
};

BigInteger::BigInteger(const BigInteger &other) {
  size = other.size;
  pInts = new short[size];
  memcpy(pInts, other.pInts, (size + 1)*2);
};

BigInteger::~BigInteger() {
  if(pInts != NULL)
    delete [] pInts;
  pInts = NULL;
};

void BigInteger::add(const BigInteger &other) {
  int longerSize = (size > other.size) ? size : other.size;
  short *newInts = new short[longerSize];
  memcpy(newInts, pInts, (size + 1)*2);
  delete [] pInts;
  pInts = newInts;
  for (int i=0; i<longerSize; i++) {
    int longerIndex = longerSize - 1 - i;
    int index = size - i - 1;
    if (index >= 0) {
      pInts[longerIndex] = pInts[index];
    }
  };
  size = longerSize;
    
  bool ifCarry = false;
    
  for (int i=0; i<size; i++) {
    int index = longerSize - 1 - i;
    int otherIndex = other.size - 1 - i;
    if (otherIndex  >= 0) {
      short result = pInts[index] + other.pInts[otherIndex];
      if (ifCarry) {
        result++;
      }
      if (result >= 10) {
        pInts[index] = result%10;
        ifCarry = true;
      } else {
        pInts[index] = result;
      }
    }
  }
    
};

void BigInteger::display() {
  for (int temp = 0; temp < size; temp++) {
    cout << pInts[temp];
  }
  cout << endl;
    
};

void BigInteger::convertStringIntoInts(string str) {
  pInts = new short[str.size()];
  for (int i=0; i<str.size(); i++) {
    pInts[i] = (str[i] - '0')%48;
  }
}




