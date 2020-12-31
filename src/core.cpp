// Auto-generated module | 2026-05-12T20:03:33.034451
#include <iostream>
#include <vector>

int compute_907() {
    int base = 428;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_907() << std::endl;
    return 0;
}
