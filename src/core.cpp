// Auto-generated module | 2026-05-12T20:41:24.638065
#include <iostream>
#include <vector>

int compute_412() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
