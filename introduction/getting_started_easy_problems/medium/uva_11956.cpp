#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        printf("Case %d: ", i + 1);
        int memory[100] = {0};
        int pointer = 0;
        string instruction;
        cin >> instruction;
        for (char inst: instruction) {
            if (inst == '>') {
                pointer = (pointer + 1) % 100;
            } else if (inst == '<') {
                --pointer;
                if (pointer < 0)
                    pointer = 99;
            } else if (inst == '+') {
                memory[pointer] = (memory[pointer] + 1) % 256;
            } else if (inst == '-') {
                --memory[pointer];
                if (memory[pointer] < 0)
                    memory[pointer] = 255;
            }
        }
        for (int j = 0; j < 100; ++j) {
            printf("%02X", memory[j]);
            if (j == 99)
                printf("\n");
            else
                printf(" ");
        }
    }
    return 0;
}