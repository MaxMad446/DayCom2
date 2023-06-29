// Auto-generated module | 2026-05-11T21:56:29.741292
#include <iostream>
#include <vector>

int compute_898() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_898() << std::endl;
    return 0;
}
