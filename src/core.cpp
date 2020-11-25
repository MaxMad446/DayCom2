// Auto-generated module | 2026-05-12T20:00:25.173066
#include <iostream>
#include <vector>

int compute_589() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
