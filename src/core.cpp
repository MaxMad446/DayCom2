// Auto-generated module | 2026-05-13T20:55:24.715895
#include <iostream>
#include <vector>

int compute_116() {
    int base = 236;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_116() << std::endl;
    return 0;
}
