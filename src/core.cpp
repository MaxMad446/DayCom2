// Auto-generated module | 2026-05-11T20:33:37.136474
#include <iostream>
#include <vector>

int compute_658() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
