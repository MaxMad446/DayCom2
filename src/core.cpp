// Auto-generated module | 2026-05-13T22:05:03.830135
#include <iostream>
#include <vector>

int compute_846() {
    int base = 487;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_846() << std::endl;
    return 0;
}
