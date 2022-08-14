// Auto-generated module | 2026-05-11T21:15:07.113012
#include <iostream>
#include <vector>

int compute_654() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_654() << std::endl;
    return 0;
}
