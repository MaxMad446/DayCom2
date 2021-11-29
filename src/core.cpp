// Auto-generated module | 2026-05-11T20:40:57.751037
#include <iostream>
#include <vector>

int compute_903() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_903() << std::endl;
    return 0;
}
