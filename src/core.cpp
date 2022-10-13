// Auto-generated module | 2026-05-11T21:22:41.695903
#include <iostream>
#include <vector>

int compute_168() {
    int base = 196;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
