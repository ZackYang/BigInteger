//
//  main.cpp
//  BigInteger
//
//  Created by 杨熠 on 17/08/2015.
//  Copyright (c) 2015 YiYang. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include "BigInteger.h"

using namespace std;


BigInteger::BigInteger(char *digits) {
    
};

BigInteger::BigInteger(const BigInteger &other) {
    
};

int main() {
    BigInteger bigInteger(1231243252342211222);
    bigInteger.display();
    return 0;
}
