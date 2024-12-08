// Auto-generated module | 2026-05-12T03:49:41.929014
#include <iostream>
#include <vector>

int compute_513() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
