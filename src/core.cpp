// Auto-generated module | 2026-05-12T21:11:16.073683
#include <iostream>
#include <vector>

int compute_916() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
