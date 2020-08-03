#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int balance = 0;
    for (int i = 0; i < n; ++i) {
        string command;
        cin >> command;
        if (command == "donate") {
            int amount;
            cin >> amount;
            balance += amount;
        } else if (command == "report") {
            cout << balance << endl;
        }
    }
    return 0;
}
