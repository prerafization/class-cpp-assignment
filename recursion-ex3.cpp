#include <iostream>
using namespace std;
class Text {
public:
    void permute(string str, int left, int right) {
        if (left == right) {
            cout << str << endl;
        } else {
        for (int i = left; i <= right; i++) {
                swap(str[left], str[i]);
                permute(str, left + 1, right);
                swap(str[left], str[i]);
            }
        }
    }
};
int main() {
    Text obj;
    string input;
    cout << "Enter a string: ";
    cin >> input;
    int n = input.length();
    obj.permute(input, 0, n - 1);
    return 0;
}
