#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        vector<char> points;
        for (int i = 0; i < n; ++i) {
            char point;
            cin >> point;
            points.push_back(point);
        }
        int min_distance = numeric_limits<int>::max();
        for (int j = 0; j < n;) {
            if (points[j] == '.') {
                ++j;
                continue;
            }
            if (points[j] == 'R') {
                int i;
                for (i = j + 1; i < n; ++i) {
                    if (points[i] == 'R') {
                        j = i;
                    }
                    if (points[i] == 'D') {
                        min_distance = min(min_distance, i - j);
                        j = i;
                        break;
                    }
                    if (points[i] == 'Z') {
                        min_distance = 0;
                        j = i;
                        break;
                    }
                }
                if (i >= n)
                    j = i;
            } else if (points[j] == 'D') {
                int i;
                for (i = j + 1; i < n; ++i) {
                    if (points[i] == 'R') {
                        min_distance = min(min_distance, i - j);
                        j = i;
                        break;
                    }
                    if (points[i] == 'Z') {
                        min_distance = 0;
                        j = i;
                        break;
                    }
                    if (points[i] == 'D') {
                        j = i;
                    }
                }
                if (i >= n)
                    j = i;
            }
            if (points[j] == 'Z') {
                min_distance = 0;
                break;
            }
        }
        cout << min_distance << endl;
        cin >> n;
    }
    return 0;
}