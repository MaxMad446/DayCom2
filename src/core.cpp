// Auto-generated module | 2026-05-13T22:11:59.300939
#include <iostream>
#include <vector>

int compute_738() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_738() << std::endl;
    return 0;
}
