// Auto-generated module | 2026-05-12T20:35:37.276350
#include <iostream>
#include <vector>

int compute_431() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
