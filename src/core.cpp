// Auto-generated module | 2026-05-11T22:03:15.425418
#include <iostream>
#include <vector>

int compute_358() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
