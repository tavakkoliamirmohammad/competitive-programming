#include <iostream>

using namespace std;

int main() {
    long n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long num;
        cin >> num;
        long res = (num * 63 + 7492) * 5 - 498;
        cout << abs(res%100) / 10 << endl;
    }
    return 0;
}
