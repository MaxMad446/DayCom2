// Auto-generated module | 2026-05-11T21:32:53.726969
#include <iostream>
#include <vector>

int compute_431() {
    int base = 494;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
