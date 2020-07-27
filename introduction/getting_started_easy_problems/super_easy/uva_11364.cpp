#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int len;
        vector<int> numbers;
        cin >> len;
        int num;
        for (int j = 0; j < len; ++j) {
            cin >> num;
            numbers.push_back(num);
        }
        int l = *min_element(numbers.begin(), numbers.end());
        int r = *max_element(numbers.begin(), numbers.end());
        cout << 2 * (r - l) << endl;
    }
    return 0;
}
