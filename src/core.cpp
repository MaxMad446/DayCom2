// Auto-generated module | 2026-05-11T20:48:54.133280
#include <iostream>
#include <vector>

int compute_548() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
