// Auto-generated module | 2026-05-11T20:49:17.704594
#include <iostream>
#include <vector>

int compute_824() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
