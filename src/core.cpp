// Auto-generated module | 2026-05-12T20:59:57.488843
#include <iostream>
#include <vector>

int compute_920() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_920() << std::endl;
    return 0;
}
