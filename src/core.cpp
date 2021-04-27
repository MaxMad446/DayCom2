// Auto-generated module | 2026-05-12T20:44:31.510701
#include <iostream>
#include <vector>

int compute_580() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
