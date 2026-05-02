// Auto-generated module | 2026-05-12T06:21:38.530068
#include <iostream>
#include <vector>

int compute_493() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
