// Auto-generated module | 2026-05-14T06:17:08.690511
#include <iostream>
#include <vector>

int compute_115() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
