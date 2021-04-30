// Auto-generated module | 2026-05-11T20:12:42.961765
#include <iostream>
#include <vector>

int compute_903() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
