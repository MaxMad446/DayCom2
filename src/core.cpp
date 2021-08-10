// Auto-generated module | 2026-05-11T20:26:13.967534
#include <iostream>
#include <vector>

int compute_365() {
    int base = 430;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_365() << std::endl;
    return 0;
}
