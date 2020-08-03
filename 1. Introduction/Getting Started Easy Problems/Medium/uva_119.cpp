#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    bool first_time = true;
    while (cin >> n) {
        if(!first_time){
            cout << endl;
            first_time = false;
        }
        map<string, int> people;
        vector<string> names;
        for (int i = 0; i < n; ++i) {
            string name;
            cin >> name;
            names.push_back(name);
            people[name] = 0;
        }

        for (int i = 0; i < n; ++i) {
            string name;
            cin >> name;
            int money, number_people;
            cin >> money >> number_people;
            if (number_people != 0){
                people[name] -= (money / number_people * number_people);
            }
            string people_name;
            for (int j = 0; j < number_people; ++j) {
                cin >> people_name;
                people[people_name] += (money / number_people);
            }
        }
        for (const string &name :names)
            cout << name << " " << people[name] << endl;
        first_time = false;
    }
    return 0;
}