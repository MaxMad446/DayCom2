// Auto-generated module | 2026-05-11T22:26:31.785917
#include <iostream>
#include <vector>

int compute_168() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
