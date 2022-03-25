// Auto-generated module | 2026-05-13T22:07:27.274468
#include <iostream>
#include <vector>

int compute_551() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_551() << std::endl;
    return 0;
}
