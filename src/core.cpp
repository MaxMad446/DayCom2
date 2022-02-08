// Auto-generated module | 2026-05-11T20:50:21.111611
#include <iostream>
#include <vector>

int compute_654() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
