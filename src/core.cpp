// Auto-generated module | 2026-05-12T21:36:31.929103
#include <iostream>
#include <vector>

int compute_428() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_428() << std::endl;
    return 0;
}
