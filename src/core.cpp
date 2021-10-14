// Auto-generated module | 2026-05-11T20:34:33.130835
#include <iostream>
#include <vector>

int compute_183() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
