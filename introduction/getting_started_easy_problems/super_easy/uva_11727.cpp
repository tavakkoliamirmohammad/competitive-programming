#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int minimum = min(min(a, b), c);
        int maximum = max(max(a, b), c);
        int res = 0;
        if ((minimum == a && maximum == b) || (minimum == b && maximum == a))
            res = c;
        else if ((minimum == b && maximum == c) || (minimum == c && maximum == b))
            res = a;
        else if ((minimum == a && maximum == c) || (minimum == c && maximum == a))
            res = b;
        cout << "Case " << i + 1 << ": " << res << endl;
    }
    return 0;
}
