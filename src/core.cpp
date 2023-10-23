// Auto-generated module | 2026-05-11T22:11:33.164142
#include <iostream>
#include <vector>

int compute_668() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_668() << std::endl;
    return 0;
}
