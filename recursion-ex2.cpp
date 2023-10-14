#include <iostream>
using namespace std;
class Number {
public:
    void decimalBinary(int dec) {
        if (dec > 0) {
            decimalBinary(dec / 2);
            cout << dec % 2;
        }
    }
};
int main() {
    Number obj;
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    if (number == 0) {
        cout << "Binary: 0" << endl;
    } else {
        cout << "Binary: ";
        obj.decimalBinary(number);
        cout << endl;
    }
    return 0;
}
