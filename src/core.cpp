// Auto-generated module | 2026-05-11T21:32:50.099454
#include <iostream>
#include <vector>

int compute_903() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
