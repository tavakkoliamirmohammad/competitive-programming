#include <iostream>

using namespace std;

int main() {
    int n, p;
    int count = 0;
    while (cin >> n >> p) {
        if (n == 0 && p == 0)
            break;
        if (count != 0)
            cout << '\n';
        string token;
        cin.ignore(10000, '\n');
        for (int i = 0; i < n; ++i) {
            getline(cin, token);
        }
        string name;
        double price;
        int met;
        bool first_time = true;
        string max_name;
        double min_price;
        int max_met;
        for (int j = 0; j < p; ++j) {
            getline(cin, name);
            cin >> price >> met;
            if (first_time) {
                max_name = name;
                min_price = price;
                max_met = met;
                first_time = false;
            }
            if (met > max_met) {
                max_met = met;
                max_name = name;
                min_price = price;
            } else if (met == max_met && price < min_price) {
                max_met = met;
                max_name = name;
                min_price = price;
            }
            cin.ignore(10000, '\n');
            for (int i = 0; i < met; ++i) {
                getline(cin, token);
            }
        }
        cout << "RFP #" << ++count << endl << max_name << endl;
    }
    return 0;
}