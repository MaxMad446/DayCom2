// Auto-generated module | 2026-05-11T20:41:18.867241
#include <iostream>
#include <vector>

int compute_853() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_853() << std::endl;
    return 0;
}
