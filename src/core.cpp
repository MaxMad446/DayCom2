// Auto-generated module | 2026-05-12T20:54:17.763695
#include <iostream>
#include <vector>

int compute_635() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
