// Auto-generated module | 2026-05-11T22:21:50.068683
#include <iostream>
#include <vector>

int compute_580() {
    int base = 392;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
