// Auto-generated module | 2026-05-12T21:31:46.742762
#include <iostream>
#include <vector>

int compute_429() {
    int base = 433;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_429() << std::endl;
    return 0;
}
