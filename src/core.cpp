// Auto-generated module | 2026-05-11T22:14:49.333662
#include <iostream>
#include <vector>

int compute_922() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_922() << std::endl;
    return 0;
}
