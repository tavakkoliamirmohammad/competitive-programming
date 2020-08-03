#include <iostream>
#include <vector>

using namespace std;

class DimensionElement {
public:
    int upper_bound;
    int lower_bound;
};

class ArrayElement {
public:
    string name;
    int base_address{};
    int byte_size{};
    int d{};
    long *c{};
    DimensionElement *dimension_elements;

    ArrayElement() {
        dimension_elements = new DimensionElement[11];
    }

    void calculate_c() {
        c = new long[d + 1];
        c[d] = byte_size;
        for (int i = d - 1; i > 0; --i) {
            c[i] = c[i + 1] * (dimension_elements[i + 1].upper_bound - dimension_elements[i + 1].lower_bound + 1);
        }
        c[0] = base_address;
        for (int i = 1; i < d + 1; ++i) {
            c[0] -= (c[i] * dimension_elements[i].lower_bound);
        }
    }

    long calculate_address(long address[11]) {
        long sum = c[0];
        for (int i = 1; i < d + 1; ++i) {
            sum += (c[i] * address[i]);
        }
        return sum;
    }
};

int main() {
    vector<ArrayElement> array_elements;
    int n, r;
    cin >> n >> r;
    for (int i = 0; i < n; ++i) {
        ArrayElement arrayElement;
        cin >> arrayElement.name >> arrayElement.base_address >> arrayElement.byte_size >> arrayElement.d;
        for (int j = 0; j < arrayElement.d; ++j) {
            DimensionElement dimensionElement{};
            cin >> dimensionElement.lower_bound >> dimensionElement.upper_bound;
            arrayElement.dimension_elements[j + 1] = dimensionElement;
        }
        arrayElement.calculate_c();
        array_elements.push_back(arrayElement);
    }
    for (int i = 0; i < r; ++i) {
        ArrayElement found;
        string array_name;
        cin >> array_name;
        for (const ArrayElement &arrayElement : array_elements) {
            if (arrayElement.name == array_name) {
                found = arrayElement;
                break;
            }
        }
        long address[11];
        printf("%s[", found.name.c_str());
        for (int j = 0; j < found.d; ++j) {
            cin >> address[j + 1];
            cout << address[j + 1];
            if (j == found.d - 1)
                printf("] = ");
            else
                printf(", ");
        }
        printf("%lu\n", found.calculate_address(address));
    }
    return 0;
}
