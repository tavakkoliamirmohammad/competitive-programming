#include <iostream>

using namespace std;

int main() {
    string word;
    cin >> word;
    int i = 0;
    while (word != "*") {
        cout << "Case " << i + 1 << ": ";
        if (word == "Hajj")
            cout << "Hajj-e-Akbar" << endl;
        else if (word == "Umrah")
            cout << "Hajj-e-Asghar" << endl;
        cin >> word;
        ++i;
    }
    return 0;
}