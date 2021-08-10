// Auto-generated module | 2026-05-12T20:53:20.121727
#include <iostream>
#include <vector>

int compute_372() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_372() << std::endl;
    return 0;
}
