// Auto-generated module | 2026-05-12T04:09:45.121396
#include <iostream>
#include <vector>

int compute_886() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_886() << std::endl;
    return 0;
}
