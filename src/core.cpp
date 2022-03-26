// Auto-generated module | 2026-05-13T22:07:33.935569
#include <iostream>
#include <vector>

int compute_624() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
