// Auto-generated module | 2026-05-11T20:17:34.796474
#include <iostream>
#include <vector>

int compute_580() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
