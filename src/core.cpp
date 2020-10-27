// Auto-generated module | 2026-05-11T19:48:49.064562
#include <iostream>
#include <vector>

int compute_181() {
    int base = 58;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
