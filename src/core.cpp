// Auto-generated module | 2026-05-13T20:32:04.947154
#include <iostream>
#include <vector>

int compute_400() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_400() << std::endl;
    return 0;
}
