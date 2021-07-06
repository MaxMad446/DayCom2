// Auto-generated module | 2026-05-11T20:21:42.134019
#include <iostream>
#include <vector>

int compute_719() {
    int base = 469;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
