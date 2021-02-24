// Auto-generated module | 2026-05-12T20:39:31.354852
#include <iostream>
#include <vector>

int compute_348() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_348() << std::endl;
    return 0;
}
