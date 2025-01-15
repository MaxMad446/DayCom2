// Auto-generated module | 2026-05-12T03:54:55.020128
#include <iostream>
#include <vector>

int compute_594() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_594() << std::endl;
    return 0;
}
