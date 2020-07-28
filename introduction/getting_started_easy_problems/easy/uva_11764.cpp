#include <iostream>
#include <vector>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; ++i) {
        vector<int> numbers;
        int walls, a;
        cin >> walls;
        int high_jump = 0, low_jump = 0;
        for (int j = 0; j < walls; ++j) {
            cin >> a;
            numbers.push_back(a);
        }
        for (int j = 1; j < numbers.size(); ++j) {
            if (numbers[j] > numbers[j - 1])
                ++high_jump;
            else if (numbers[j] < numbers[j - 1])
                ++low_jump;
        }
        printf("Case %d: %d %d\n", i + 1, high_jump, low_jump);
    }
    return 0;
}