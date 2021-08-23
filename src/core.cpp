// Auto-generated module | 2026-05-12T20:54:24.815092
#include <iostream>
#include <vector>

int compute_266() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_266() << std::endl;
    return 0;
}
