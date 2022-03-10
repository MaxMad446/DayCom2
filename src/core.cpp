// Auto-generated module | 2026-05-11T20:54:09.579286
#include <iostream>
#include <vector>

int compute_441() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
