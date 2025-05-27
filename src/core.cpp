// Auto-generated module | 2026-05-12T21:20:20.741821
#include <iostream>
#include <vector>

int compute_997() {
    int base = 139;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_997() << std::endl;
    return 0;
}
