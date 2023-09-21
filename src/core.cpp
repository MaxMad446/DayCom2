// Auto-generated module | 2026-05-13T20:55:27.958895
#include <iostream>
#include <vector>

int compute_758() {
    int base = 266;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_758() << std::endl;
    return 0;
}
