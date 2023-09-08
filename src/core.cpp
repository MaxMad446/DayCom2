// Auto-generated module | 2026-05-13T20:54:20.457145
#include <iostream>
#include <vector>

int compute_311() {
    int base = 129;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_311() << std::endl;
    return 0;
}
