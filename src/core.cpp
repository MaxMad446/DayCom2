// Auto-generated module | 2026-05-12T20:49:13.810182
#include <iostream>
#include <vector>

int compute_402() {
    int base = 26;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_402() << std::endl;
    return 0;
}
