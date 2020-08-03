#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    for (int i = 0; i < test_case; ++i) {
        printf("Case %d: ", i + 1);
        int n;
        cin >> n;
        vector<int> durations;
        for (int j = 0; j < n; ++j) {
            int a;
            cin >> a;
            durations.push_back(a);
        }
        int mile = 0, juice = 0;

        for (int a : durations) {
            mile += ceil((a + 1) / 30.0);
            juice += ceil((a + 1) / 60.0);
        }
        mile *= 10;
        juice *= 15;
        if (mile == juice)
            cout << "Mile Juice " << mile << endl;
        else if (mile < juice)
            cout << "Mile " << mile << endl;
        if (mile > juice)
            cout << "Juice " << juice << endl;

    }
    return 0;
}