#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    string line;
    for (int i = 0; i < test_case; ++i) {
        printf("Case #%d:\n", i + 1);
        int max_value = 0;
        map<int, vector<string>> urls;
        for (int j = 0; j < 10; ++j) {
            int key;
            string value;
            cin >> value >> key;
            urls[key].push_back(value);
            max_value = max(max_value, key);
        }
        for (auto & k : urls[max_value]) {
            cout << k << endl;
        }
    }
    return 0;
}