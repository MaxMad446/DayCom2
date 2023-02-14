// Auto-generated module | 2026-05-13T20:30:35.569315
#include <iostream>
#include <vector>

int compute_360() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
