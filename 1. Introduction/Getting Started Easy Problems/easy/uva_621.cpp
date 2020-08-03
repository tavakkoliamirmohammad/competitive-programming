#include <iostream>

using namespace std;


char find_result(string word) {
    if(word == "1" || word == "4" || word == "78")
        return '+';
    if (word.substr(word.length() - 2,2) == "35")
        return '-';
    if (word[0] == '9' && word[word.length() - 1] == '4')
        return '*';
    if (word.substr(0, 3) == "190")
        return '?';
    return 'a';
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        cout << find_result(word) << endl;
    }
    return 0;
}