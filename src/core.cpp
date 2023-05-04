// Auto-generated module | 2026-05-13T20:37:13.661923
#include <iostream>
#include <vector>

int compute_800() {
    int base = 395;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
