// Auto-generated module | 2026-05-11T20:26:03.064276
#include <iostream>
#include <vector>

int compute_983() {
    int base = 326;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_983() << std::endl;
    return 0;
}
