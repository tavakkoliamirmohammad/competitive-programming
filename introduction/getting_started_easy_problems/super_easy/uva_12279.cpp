#include <iostream>
#include <sstream>

using namespace std;

int main() {
    int k;
    int i = 0;
    cin >> k;
    while (k != 0) {
        string line;
        cin.ignore();
        getline(cin, line);
        stringstream in(line);
        int temp;
        int book_balance = 0;
        int expected_balance = 0;
        while (in >> temp) {
            if (temp == 0)
                expected_balance++;
            else
                book_balance++;
        }
        cout << "Case " << i + 1 << ": " << book_balance - expected_balance << endl;
        cin >> k;
        ++i;
    }
    return 0;
}
