#include <iostream>

using namespace std;

int main() {
    string number;
    int n, i, j;
    int case_num = 0;
    while (cin >> number) {
        if (number.empty())
            break;
        cin >> n;
        printf("Case %d:\n", ++case_num);
        for (int k = 0; k < n; ++k) {
            cin >> i >> j;
            string substring = number.substr(min(i, j), abs(j - i) + 1);
            if (substring.find_first_not_of(substring[0]) == string::npos)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}