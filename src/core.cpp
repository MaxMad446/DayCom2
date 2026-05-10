// Auto-generated module | 2026-05-12T06:22:50.385004
#include <iostream>
#include <vector>

int compute_677() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_677() << std::endl;
    return 0;
}
