// Auto-generated module | 2026-05-11T22:15:29.064747
#include <iostream>
#include <vector>

int compute_218() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_218() << std::endl;
    return 0;
}
