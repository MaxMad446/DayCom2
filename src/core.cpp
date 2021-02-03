// Auto-generated module | 2026-05-12T20:37:48.756445
#include <iostream>
#include <vector>

int compute_938() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_938() << std::endl;
    return 0;
}
