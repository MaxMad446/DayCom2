// Auto-generated module | 2026-05-14T18:23:05.375090
#include <iostream>
#include <vector>

int compute_891() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
