#include <iostream>

using namespace std;


int main() {
    while (true) {
        int start, first, second, third;
        cin >> start >> first >> second >> third;
        if (start == 0 && first == 0 && second == 0 && third == 0)
            break;
        int res = 2 * 360 + (first - start) * 90 + 360 + (second - first) * 90 + (third - second) * 90;
        cout << res << endl;
    }
    return 0;
}
