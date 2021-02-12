// Auto-generated module | 2026-05-11T20:03:06.459331
#include <iostream>
#include <vector>

int compute_634() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_634() << std::endl;
    return 0;
}
