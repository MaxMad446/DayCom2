// Auto-generated module | 2026-05-11T20:56:29.730198
#include <iostream>
#include <vector>

int compute_509() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
