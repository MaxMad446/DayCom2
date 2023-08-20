// Auto-generated module | 2026-05-11T22:03:08.842757
#include <iostream>
#include <vector>

int compute_278() {
    int base = 421;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
