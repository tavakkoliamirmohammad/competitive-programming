#include <iostream>
#include <vector>

using namespace std;

int execute_instruction(vector<string> &instructions, int index) {
    string instruction = instructions[index];
    int p = 0;
    if (instruction == "LEFT")
        p = -1;
    if (instruction == "RIGHT")
        p = +1;
    if (instruction.substr(0, 4) == "SAME") {
        int n = stoi(instruction.substr(8));
        return execute_instruction(instructions, n - 1);
    }
    return p;
}

int main() {
    int test_case, instruction_number;
    cin >> test_case;
    for (int i = 0; i < test_case; ++i) {
        cin >> instruction_number;
        cin.ignore(10000, '\n');
        vector<string> instructions;
        int p = 0;
        for (int j = 0; j < instruction_number; ++j) {
            string instruction;
            getline(cin, instruction);
            instructions.push_back(instruction);
            p += execute_instruction(instructions, j);
        }
        cout << p << endl;
    }
    return 0;
}