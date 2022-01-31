// Auto-generated module | 2026-05-11T20:49:11.171318
#include <iostream>
#include <vector>

int compute_880() {
    int base = 384;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_880() << std::endl;
    return 0;
}
