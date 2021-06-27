// Auto-generated module | 2026-05-12T20:49:45.170637
#include <iostream>
#include <vector>

int compute_982() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_982() << std::endl;
    return 0;
}
