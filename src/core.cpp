// Auto-generated module | 2026-05-11T21:24:22.727997
#include <iostream>
#include <vector>

int compute_674() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_674() << std::endl;
    return 0;
}
