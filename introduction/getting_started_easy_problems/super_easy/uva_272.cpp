#include <iostream>

using namespace std;


int main() {
    string line;
    bool first = false;
    while (getline(cin, line)) {
        int pos;
        while ((pos = line.find('\"')) != string::npos) {
            line.replace(pos, 1, !first ? "``" : "''");
            first = !first;
        }
        cout << line << endl;
    }
    return 0;
}
