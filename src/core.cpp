// Auto-generated module | 2026-05-11T21:17:34.968438
#include <iostream>
#include <vector>

int compute_470() {
    int base = 230;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
