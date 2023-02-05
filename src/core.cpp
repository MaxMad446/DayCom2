// Auto-generated module | 2026-05-11T21:37:38.377848
#include <iostream>
#include <vector>

int compute_568() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_568() << std::endl;
    return 0;
}
