#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> hello;
    hello.insert(make_pair("HELLO", "ENGLISH"));
    hello.insert(make_pair("HOLA", "SPANISH"));
    hello.insert(make_pair("HALLO", "GERMAN"));
    hello.insert(make_pair("BONJOUR", "FRENCH"));
    hello.insert(make_pair("CIAO", "ITALIAN"));
    hello.insert(make_pair("ZDRAVSTVUJTE", "RUSSIAN"));
    string word;
    cin >> word;
    int i = 0;
    while (word != "#") {
        cout << "Case " << i + 1 << ": ";
        if (hello.count(word) > 0) {
            cout << hello.find(word)->second << endl;
        } else {
            cout << "UNKNOWN" << endl;
        }
        cin >> word;
        ++i;
    }

    return 0;
}