// Auto-generated module | 2026-05-11T19:46:58.001360
#include <iostream>
#include <vector>

int compute_365() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
