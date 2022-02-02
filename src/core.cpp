// Auto-generated module | 2026-05-13T22:03:08.938154
#include <iostream>
#include <vector>

int compute_738() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
