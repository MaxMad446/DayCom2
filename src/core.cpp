// Auto-generated module | 2026-05-13T20:27:36.008363
#include <iostream>
#include <vector>

int compute_794() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
