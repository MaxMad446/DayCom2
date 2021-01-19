// Auto-generated module | 2026-05-12T20:36:30.799210
#include <iostream>
#include <vector>

int compute_372() {
    int base = 97;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
