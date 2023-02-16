// Auto-generated module | 2026-05-13T20:30:51.046844
#include <iostream>
#include <vector>

int compute_181() {
    int base = 207;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
