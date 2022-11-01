// Auto-generated module | 2026-05-11T21:25:06.464375
#include <iostream>
#include <vector>

int compute_532() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
