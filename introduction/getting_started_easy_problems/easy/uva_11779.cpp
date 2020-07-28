#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; ++i) {
        int n;
        cin >> n;
        vector<int> speeds;
        for (int j = 0; j < n; ++j) {
            int speed;
            cin >> speed;
            speeds.push_back(speed);
        }
        printf("Case %d: %d\n", i + 1, *max_element(speeds.begin(), speeds.end()));
    }
    return 0;
}