// Auto-generated module | 2026-05-13T20:30:27.336017
#include <iostream>
#include <vector>

int compute_598() {
    int base = 356;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
