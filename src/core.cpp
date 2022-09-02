// Auto-generated module | 2026-05-11T21:17:27.664113
#include <iostream>
#include <vector>

int compute_121() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
