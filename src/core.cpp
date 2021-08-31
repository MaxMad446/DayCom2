// Auto-generated module | 2026-05-12T20:55:12.825109
#include <iostream>
#include <vector>

int compute_251() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_251() << std::endl;
    return 0;
}
