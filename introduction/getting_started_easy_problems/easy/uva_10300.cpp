#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int farmer_number;
        cin >> farmer_number;
        long a, b, c;
        long res = 0;
        for (int j = 0; j < farmer_number; ++j) {
            cin >> a >> b >> c;
            res += (a * c);
        }
        cout << res << endl;

    }
    return 0;
}