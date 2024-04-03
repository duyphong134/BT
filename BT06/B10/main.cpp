//B10
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decimalToBinary(int n) {
    string binary = "";
    while (n > 0) {
        int remainder = n % 2;
        binary = to_string(remainder) + binary;
        n /= 2;
    }
    return binary;
}

int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        ++power;
    }
    return decimal;
}

int main() {

    int decimalNumber; cin >> decimalNumber;
    string binaryNumber = decimalToBinary(decimalNumber);
    cout << binaryNumber << endl;
    int res = binaryToDecimal(binaryNumber);
    cout << res << endl;
    return 0;
}
