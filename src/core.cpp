// Auto-generated module | 2026-05-12T21:37:03.614097
#include <iostream>
#include <vector>

int compute_431() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
