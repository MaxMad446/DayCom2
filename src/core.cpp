// Auto-generated module | 2026-05-11T20:00:38.343534
#include <iostream>
#include <vector>

int compute_260() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_260() << std::endl;
    return 0;
}
