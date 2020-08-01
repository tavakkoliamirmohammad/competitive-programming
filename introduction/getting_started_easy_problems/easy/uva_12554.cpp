#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    vector<string> persons;
    for (int i = 0; i < test_case; ++i) {
        string name;
        cin >> name;
        persons.push_back(name);
    }
    vector<string> song = {"Happy", "birthday", "to", "you"};
    if (persons.size() <= 16) {
        for (int j = 0; j < 16; ++j) {
            cout << persons[j % persons.size()] << ": " << song[j % 4] << endl;
        }
    } else {
        for (int j = 0; j < ceil(persons.size() / 4) * 16 ; ++j) {
            cout << persons[j % persons.size()] << ": " << song[j % 4] << endl;
        }
    }

    return 0;
}