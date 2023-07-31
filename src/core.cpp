// Auto-generated module | 2026-05-13T20:51:13.241373
#include <iostream>
#include <vector>

int compute_828() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_828() << std::endl;
    return 0;
}
