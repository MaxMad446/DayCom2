// Auto-generated module | 2026-05-11T20:12:29.136214
#include <iostream>
#include <vector>

int compute_800() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
