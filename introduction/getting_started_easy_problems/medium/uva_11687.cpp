#include <iostream>

using namespace std;

int count_digit(string x0, string x1, int i) {
    if (x0 == x1)
        return i;
    return count_digit(x1, to_string(x1.length()), i + 1);
}

int main() {
    string number;
    cin >> number;
    while (number != "END") {
        cout << count_digit(number, to_string(number.length()), 1) << endl;
        cin >> number;
    }
    return 0;
}