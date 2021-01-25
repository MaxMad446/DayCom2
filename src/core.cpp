// Auto-generated module | 2026-05-11T20:00:36.710359
#include <iostream>
#include <vector>

int compute_165() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
