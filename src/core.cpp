// Auto-generated module | 2026-05-12T06:17:24.183906
#include <iostream>
#include <vector>

int compute_844() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_844() << std::endl;
    return 0;
}
