// Auto-generated module | 2026-05-12T21:24:20.942905
#include <iostream>
#include <vector>

int compute_389() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_389() << std::endl;
    return 0;
}
