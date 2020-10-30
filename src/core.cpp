// Auto-generated module | 2026-05-14T18:03:51.873084
#include <iostream>
#include <vector>

int compute_292() {
    int base = 57;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
