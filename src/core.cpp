// Auto-generated module | 2026-05-11T22:37:30.032686
#include <iostream>
#include <vector>

int compute_510() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_510() << std::endl;
    return 0;
}
