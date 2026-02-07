#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter value of N: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << i << ": ";

        if (i % 3 == 0 && i % 5 == 0) {
            cout << "Buzz Fuzz";
        }
        else if (i % 3 == 0) {
            cout << "Buzz";
        }
        else if (i % 5 == 0) {
            cout << "Fuzz";
        }
        else {
            cout << "No Tag";
        }
        cout << endl;
    }
    return 0;
}
