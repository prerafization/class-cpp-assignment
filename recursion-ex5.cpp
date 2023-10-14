#include<bits/stdc++.h>
#include <iostream>
using namespace std;
class Number {
public:
    int fibonacci(int n) {
        if (n <= 1) {
            return n;
        } else {
            return fibonacci(n - 1) + fibonacci(n - 2);
        }
    }
void printSeries(int n) {
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
        cout << endl;
    }
};
int main() {
    Number obj;
    int a;
    cin >> a;
    obj.printSeries(a);
    return 0;
}
