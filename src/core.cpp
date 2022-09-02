// Auto-generated module | 2026-05-14T06:18:45.164924
#include <iostream>
#include <vector>

int compute_584() {
    int base = 442;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_584() << std::endl;
    return 0;
}
