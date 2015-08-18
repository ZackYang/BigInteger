//
//  BigInteger.h
//  BigInteger
//
//  Created by 杨熠 on 17/08/2015.
//  Copyright (c) 2015 YiYang. All rights reserved.
//
#include <string>
#include <sstream>

using namespace std;

class BigInteger {
private:
    int *pInts;
    int size = 0;
    
public:
    
    std::string result() {
        return "";
    };
    
    
    BigInteger(long long number) {
        stringstream ss;
        ss << number;
        string str = ss.str();
        int ints[str.size()];
        pInts = ints;
        size = (int)str.size();
        for (int i=0; i<size; i++) {
            *(pInts+i) = (str[i]-'0')%48;
        }
        cout << "size: " << size << endl;
    };

    
    BigInteger(char *digit);
    BigInteger(const BigInteger &other);
    
    
    void display() {
        ostringstream oss("");
        for (int temp = 0; temp < size; temp++)
            cout << *(pInts+temp) << endl;
    }
    
    void setSize(int s);
    
    void p(unsigned s) {
        cout << s;
    };
    
    void puts(unsigned s) {
        cout << s << endl;
    };
};