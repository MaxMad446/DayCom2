// Auto-generated module | 2026-05-11T20:30:24.196064
#include <iostream>
#include <vector>

int compute_489() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
