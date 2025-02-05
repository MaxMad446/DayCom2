// Auto-generated module | 2026-05-12T03:57:37.120784
#include <iostream>
#include <vector>

int compute_116() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
