// Auto-generated module | 2026-05-12T03:59:44.125021
#include <iostream>
#include <vector>

int compute_612() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
