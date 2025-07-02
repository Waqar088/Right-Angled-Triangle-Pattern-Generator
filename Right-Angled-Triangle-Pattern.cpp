#include <iostream>
using namespace std;

int main() {
    cout << "=== Right-Angled Triangle Pattern Generator ===" << endl;

    int rows = 5;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
