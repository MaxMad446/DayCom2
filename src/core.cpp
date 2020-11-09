// Auto-generated module | 2026-05-12T19:59:00.875220
#include <iostream>
#include <vector>

int compute_372() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
