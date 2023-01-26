// Auto-generated module | 2026-05-13T20:29:00.058107
#include <iostream>
#include <vector>

int compute_974() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_974() << std::endl;
    return 0;
}
