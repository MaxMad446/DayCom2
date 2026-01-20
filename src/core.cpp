// Auto-generated module | 2026-05-12T04:43:57.392731
#include <iostream>
#include <vector>

int compute_998() {
    int base = 358;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
