// Auto-generated module | 2026-05-12T20:56:55.729000
#include <iostream>
#include <vector>

int compute_157() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_157() << std::endl;
    return 0;
}
