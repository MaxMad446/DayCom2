// Auto-generated module | 2026-05-12T20:01:49.419792
#include <iostream>
#include <vector>

int compute_617() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
