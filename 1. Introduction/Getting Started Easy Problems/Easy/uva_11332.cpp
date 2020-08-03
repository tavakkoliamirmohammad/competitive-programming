#include <iostream>

using namespace std;

int sum_of_digits(string n) {
    if (n.length() == 1)
        return n[0] - '0';
    int res = 0;
    for (char c : n) {
        res += (c - '0');
    }
    return sum_of_digits(to_string(res));
}

int main() {
    string n;
    cin >> n;
    while (n != "0") {
        cout << sum_of_digits(n) << endl;
        cin >> n;
    }
    return 0;
}