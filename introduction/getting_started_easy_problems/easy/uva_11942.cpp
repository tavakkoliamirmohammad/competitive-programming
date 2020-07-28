#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    string line;
    cin.ignore(10000, '\n');
    cout << "Lumberjacks:" << endl;
    for (int i = 0; i < test_case; ++i) {
        bool ordered = true, reverse_ordered = true;
        getline(cin, line);
        stringstream in(line);
        vector<int> people;
        int size;
        while (in >> size)
            people.push_back(size);
        for (int j = 1; j < people.size(); ++j) {
            if (people[j] < people[j - 1]) {
                ordered = false;
                break;
            }
        }
        for (int j = 1; j < people.size(); ++j) {
            if (people[j] > people[j - 1]) {
                reverse_ordered = false;
                break;
            }
        }
        if (ordered || reverse_ordered) {
            cout << "Ordered" << endl;
        }
        else{
            cout << "Unordered" << endl;

        }
    }
    return 0;
}