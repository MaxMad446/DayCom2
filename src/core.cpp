// Auto-generated module | 2026-05-12T21:08:00.748458
#include <iostream>
#include <vector>

int compute_132() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
