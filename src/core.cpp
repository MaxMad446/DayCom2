// Auto-generated module | 2026-05-14T06:24:20.640719
#include <iostream>
#include <vector>

int compute_470() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
