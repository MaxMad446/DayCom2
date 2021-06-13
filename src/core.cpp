// Auto-generated module | 2026-05-12T20:48:30.080824
#include <iostream>
#include <vector>

int compute_864() {
    int base = 215;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_864() << std::endl;
    return 0;
}
