// Auto-generated module | 2026-05-13T20:26:45.529429
#include <iostream>
#include <vector>

int compute_312() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
