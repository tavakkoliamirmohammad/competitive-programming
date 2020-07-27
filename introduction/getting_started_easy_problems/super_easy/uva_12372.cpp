#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int l, w, h;
        cin >> l >> w >> h;
        bool res = l <= 20 && w <= 20 && h <= 20;
        if (res)
            cout << "Case " << i + 1 << ": " << "good" << endl;
        else
            cout << "Case " << i + 1 << ": " << "bad" << endl;
    }
    return 0;
}
