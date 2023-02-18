// Auto-generated module | 2026-05-13T20:30:59.348308
#include <iostream>
#include <vector>

int compute_624() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
