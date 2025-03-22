// Auto-generated module | 2026-05-12T04:03:31.446851
#include <iostream>
#include <vector>

int compute_503() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
