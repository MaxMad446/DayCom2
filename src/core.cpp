// Auto-generated module | 2026-05-11T20:58:24.556566
#include <iostream>
#include <vector>

int compute_983() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
