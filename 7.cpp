#include <iostream>
using namespace std;

int main() {
    int p1, p2, p3;

    cout << "Enter score of P1: ";
    cin >> p1;
    cout << "Enter score of P2: ";
    cin >> p2;
    cout << "Enter score of P3: ";
    cin >> p3;

    if (p1 > p2 && p1 > p3) {
        cout << "P1 is the winner";
    }
    else if (p2 > p1 && p2 > p3) {
        cout << "P2 is the winner";
    }
    else if (p3 > p1 && p3 > p2) {
        cout << "P3 is the winner";
    }
    else {
        cout << "It is a tie";
    }

    return 0;
}
