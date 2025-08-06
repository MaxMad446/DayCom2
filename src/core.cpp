// Auto-generated module | 2026-05-12T21:26:37.178011
#include <iostream>
#include <vector>

int compute_807() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_807() << std::endl;
    return 0;
}
