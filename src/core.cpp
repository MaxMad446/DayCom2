// Auto-generated module | 2026-05-12T03:47:38.361312
#include <iostream>
#include <vector>

int compute_411() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_411() << std::endl;
    return 0;
}
