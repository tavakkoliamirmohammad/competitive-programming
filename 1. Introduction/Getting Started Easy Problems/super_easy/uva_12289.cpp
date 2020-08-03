#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int matching_characters(string s1, string s2) {
    sort(begin(s1), end(s1));
    sort(begin(s2), end(s2));
    string intersection;
    set_intersection(begin(s1), end(s1), begin(s2), end(s2),
                     back_inserter(intersection));
    return intersection.size();
}


int main() {
    int n;
    cin >> n;
    vector<string> words = {"one", "two", "three"};
    for (int i = 0; i < n; ++i) {
        vector<int> diffs;
        string w;
        cin >> w;
        for (const string& word : words) {
            diffs.push_back(w.size() - matching_characters(w, word));
        }
        cout << min_element(diffs.begin(), diffs.end()) - diffs.begin() + 1<< endl;

    }
    return 0;
}
