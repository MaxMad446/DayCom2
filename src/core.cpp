// Auto-generated module | 2026-05-12T04:48:24.320110
#include <iostream>
#include <vector>

int compute_606() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_606() << std::endl;
    return 0;
}
