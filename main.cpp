#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int a = 0, b = 1;
    cout << a << " ";
    for (int i = 1; i < n; ++i) {
        cout << b << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}