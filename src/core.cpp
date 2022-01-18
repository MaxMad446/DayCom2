// Auto-generated module | 2026-05-11T20:47:29.827441
#include <iostream>
#include <vector>

int compute_493() {
    int base = 329;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
