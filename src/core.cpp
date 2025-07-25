// Auto-generated module | 2026-05-12T04:19:49.952390
#include <iostream>
#include <vector>

int compute_304() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
