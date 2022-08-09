// Auto-generated module | 2026-05-14T06:16:43.934494
#include <iostream>
#include <vector>

int compute_372() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
