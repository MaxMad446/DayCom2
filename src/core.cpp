// Auto-generated module | 2026-05-11T21:54:31.356532
#include <iostream>
#include <vector>

int compute_279() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_279() << std::endl;
    return 0;
}
