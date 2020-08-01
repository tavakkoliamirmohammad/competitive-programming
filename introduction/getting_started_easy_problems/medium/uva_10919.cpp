#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int k, m;
    cin >> k;
    while (k != 0) {
        cin >> m;
        vector<string> courses;
        for (int i = 0; i < k; ++i) {
            string c;
            cin >> c;
            courses.push_back(c);
        }
        bool found = true;
        for (int j = 0; j < m; ++j) {
            int c, r;
            cin >> c >> r;
            for (int i = 0; i < c; ++i) {
                string cs;
                cin >> cs;
                if (find(courses.begin(), courses.end(), cs) != courses.end()) {
                    r -= 1;
                }
            }
            found &= (r <= 0);
        }
        if (found)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
        cin >> k;
    }
    return 0;
}