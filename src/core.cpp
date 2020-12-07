// Auto-generated module | 2026-05-11T19:54:17.219642
#include <iostream>
#include <vector>

int compute_876() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_876() << std::endl;
    return 0;
}
