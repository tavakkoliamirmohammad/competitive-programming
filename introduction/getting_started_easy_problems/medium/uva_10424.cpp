#include <iostream>

using namespace std;

int reduce_string_alphabet(const string &text) {
    int sum = 0;
    for (char i : text) {
        if (i >= 'a' && i <= 'z')
            sum += (i - 'a' + 1);
        else if (i >= 'A' && i <= 'Z')
            sum += (i - 'A' + 1);
    }
    return sum;
}

int sum_of_digits(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    if (sum > 9) {
        sum = sum_of_digits(sum);
    }
    return sum;
}


int main() {
    string first, second;
    while (getline(cin, first)) {
        getline(cin, second);
        int first_sum = sum_of_digits(reduce_string_alphabet(first));
        int second_sum = sum_of_digits(reduce_string_alphabet(second));
        printf("%.2f %%\n", (double) min(first_sum, second_sum) / max(first_sum, second_sum) * 100);
    }
    return 0;
}