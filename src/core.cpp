// Auto-generated module | 2026-05-12T04:06:28.871773
#include <iostream>
#include <vector>

int compute_801() {
    int base = 274;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
