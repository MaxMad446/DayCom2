// Auto-generated module | 2026-05-11T22:25:43.140833
#include <iostream>
#include <vector>

int compute_617() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
