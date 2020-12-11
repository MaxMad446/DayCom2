// Auto-generated module | 2026-05-12T20:01:44.668952
#include <iostream>
#include <vector>

int compute_651() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_651() << std::endl;
    return 0;
}
