// Auto-generated module | 2026-05-11T20:52:06.433460
#include <iostream>
#include <vector>

int compute_818() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
