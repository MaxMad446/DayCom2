// Auto-generated module | 2026-05-12T20:36:46.589908
#include <iostream>
#include <vector>

int compute_115() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
