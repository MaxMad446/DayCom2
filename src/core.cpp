// Auto-generated module | 2026-05-13T20:54:43.692123
#include <iostream>
#include <vector>

int compute_453() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_453() << std::endl;
    return 0;
}
