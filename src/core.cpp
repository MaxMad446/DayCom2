// Auto-generated module | 2026-05-11T22:37:43.879524
#include <iostream>
#include <vector>

int compute_519() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
