// Auto-generated module | 2026-05-12T04:22:54.773198
#include <iostream>
#include <vector>

int compute_304() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
