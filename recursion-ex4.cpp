#include <iostream>
using namespace std;
class Number {
public:
    int sumDigit(int num) {
        if (num == 0) {
            return 0;
        }
        return num % 10 + sumDigit(num / 10);
    }
};
int main() {
    Number obj;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = obj.sumDigit(n);
    cout << "Sum of digits: " << result << endl;
    return 0;
}
