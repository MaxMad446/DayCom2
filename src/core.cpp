// Auto-generated module | 2026-05-11T20:31:44.912522
#include <iostream>
#include <vector>

int compute_657() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
