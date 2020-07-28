#include <iostream>
#include <vector>

using namespace std;

int main() {
    int start, end;
    cin >> start >> end;
    while (start != -1 && end != -1) {
        cout << min(abs(end - start), abs(start - end + 99 + 1)) << endl;
        cin >> start >> end;
    }
    return 0;
}