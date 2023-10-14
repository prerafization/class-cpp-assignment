#include <iostream>
using namespace std;
class Number {
public:
    int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
        return gcd(b, a % b);
    }
};
int main() {
    Number obj;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    int result = obj.gcd(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << result << endl;
    return 0;
}
