// Auto-generated module | 2026-05-12T03:55:26.691908
#include <iostream>
#include <vector>

int compute_770() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
