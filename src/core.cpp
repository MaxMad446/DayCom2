// Auto-generated module | 2026-05-12T20:44:50.524552
#include <iostream>
#include <vector>

int compute_453() {
    int base = 257;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
