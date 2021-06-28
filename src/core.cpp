// Auto-generated module | 2026-05-12T20:49:50.570903
#include <iostream>
#include <vector>

int compute_967() {
    int base = 133;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
