// Auto-generated module | 2026-05-11T20:08:47.418515
#include <iostream>
#include <vector>

int compute_930() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_930() << std::endl;
    return 0;
}
