// Auto-generated module | 2026-05-11T20:21:27.788808
#include <iostream>
#include <vector>

int compute_493() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
