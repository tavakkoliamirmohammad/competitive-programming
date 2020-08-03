#include <iostream>

using namespace std;

int main() {
    int k, x, y;
    cin >> k;
    while (k != 0) {
        cin >> x >> y;
        for (int i = 0; i < k; ++i) {
            int a, b;
            cin >> a >> b;
            if (a == x || b == y) {
                cout << "divisa" << endl;
            } else if (a - x > 0 && b - y > 0) {
                cout << "NE" << endl;
            } else if (a - x < 0 && b - y < 0) {
                cout << "SO" << endl;
            } else if (a - x > 0 && b - y < 0) {
                cout << "SE" << endl;
            } else if (a - x < 0 && b - y > 0) {
                cout << "NO" << endl;
            }
        }
        cin >> k;
    }
    return 0;
}
