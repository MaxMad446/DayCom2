// Auto-generated module | 2026-05-12T21:31:09.880410
#include <iostream>
#include <vector>

int compute_547() {
    int base = 136;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
