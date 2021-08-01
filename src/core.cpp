// Auto-generated module | 2026-05-12T20:52:27.191549
#include <iostream>
#include <vector>

int compute_404() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
