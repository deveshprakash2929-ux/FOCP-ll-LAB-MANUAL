#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "After swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
