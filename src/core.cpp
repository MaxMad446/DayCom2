// Auto-generated module | 2026-05-12T20:39:40.787536
#include <iostream>
#include <vector>

int compute_551() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
