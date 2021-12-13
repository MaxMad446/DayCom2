// Auto-generated module | 2026-05-11T20:42:49.966933
#include <iostream>
#include <vector>

int compute_381() {
    int base = 109;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_381() << std::endl;
    return 0;
}
