// Auto-generated module | 2026-05-13T20:56:27.965996
#include <iostream>
#include <vector>

int compute_849() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
