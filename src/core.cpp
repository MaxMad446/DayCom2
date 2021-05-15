// Auto-generated module | 2026-05-11T20:14:37.471498
#include <iostream>
#include <vector>

int compute_740() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
