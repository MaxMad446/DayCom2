// Auto-generated module | 2026-05-11T20:55:51.352518
#include <iostream>
#include <vector>

int compute_992() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_992() << std::endl;
    return 0;
}
