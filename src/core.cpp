// Auto-generated module | 2026-05-13T20:50:23.790359
#include <iostream>
#include <vector>

int compute_307() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
