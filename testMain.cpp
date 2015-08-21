#include "BigInteger.cpp"

int main() {
    BigInteger bigInteger1("1231243252342211222");
    bigInteger1.display();
    cout << "==============" << endl;
    BigInteger bigInteger2(bigInteger1);
    bigInteger2.display();
    cout << "==============" << endl;
    bigInteger1.add(bigInteger2);
    bigInteger1.display();
    cout << "==============" << endl;
    BigInteger bigInteger3(111);
    bigInteger1.add(bigInteger3);
    bigInteger1.display();
    return 0;
}