// Auto-generated module | 2026-05-12T21:27:29.500231
#include <iostream>
#include <vector>

int compute_446() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_446() << std::endl;
    return 0;
}
