#include <string>

//using namespace std;

class BigInteger {

private:
  short *pInts;    
  void convertStringIntoInts(std::string);
    
public:
  int size;
    
  BigInteger();
  BigInteger(long long);
  BigInteger(const char *);
  BigInteger(const BigInteger &);
  ~BigInteger();
    
  void add(const BigInteger &);
  void display();

};
