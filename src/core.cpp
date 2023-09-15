// Auto-generated module | 2026-05-13T20:54:56.744969
#include <iostream>
#include <vector>

int compute_806() {
    int base = 488;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
