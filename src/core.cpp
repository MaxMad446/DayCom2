// Auto-generated module | 2026-05-13T20:57:29.443733
#include <iostream>
#include <vector>

int compute_704() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_704() << std::endl;
    return 0;
}
