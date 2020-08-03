#include <iostream>

using namespace std;

int main() {
    int n, m, c;
    int s = 0;
    while (cin >> n >> m >> c) {
        if (n == 0 && m == 0 && c == 0)
            break;
        printf("Sequence %d\n", s + 1);
        int devices_power[21];
        bool device_on[21];
        for (int i = 0; i < n; ++i) {
            int dev;
            cin >> dev;
            devices_power[i] = dev;
            device_on[i] = false;
        }
        int fuse = 0;
        int power_consumption = 0;
        bool blown = false;
        for (int j = 0; j < m; ++j) {
            int inst;
            cin >> inst;
            if (device_on[inst - 1] && !blown)
                fuse -= devices_power[inst - 1];
            else if (!device_on[inst - 1] && !blown)
                fuse += devices_power[inst - 1];
            device_on[inst - 1] = !device_on[inst - 1];
            power_consumption = max(power_consumption, fuse);
            if (fuse > c && !blown) {
                cout << "Fuse was blown.\n" << endl;
                blown = true;
            }
        }
        if (fuse <= c) {
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n\n", power_consumption);
        }
        ++s;

    }
    return 0;
}