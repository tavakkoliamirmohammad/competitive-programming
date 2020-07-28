#include <iostream>
#include <vector>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    while (start != -1 && end != -1) {
        int distance = abs(start - end);
        cout << min(100 - distance, distance) << endl;
        cin >> start >> end;
    }
    return 0;
}