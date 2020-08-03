#include <iostream>

using namespace std;

int main() {
    int participants, budget, hotels, weeks;
    while (cin >> participants >> budget >> hotels >> weeks) {
        int min_cost = INT32_MIN;
        for (int i = 0; i < hotels; ++i) {
            int p, bed;
            cin >> p;
            for (int j = 0; j < weeks; ++j) {
                cin >> bed;
                if (bed < participants)
                    continue;
                if (participants * p <= budget)
                    if (min_cost == INT32_MIN) {
                        min_cost = max(min_cost, participants * p);
                    } else {
                        min_cost = min(min_cost, participants * p);
                    }
            }
        }
        if (min_cost == INT32_MIN)
            cout << "stay home" << endl;
        else
            cout << min_cost << endl;
    }
    return 0;
}