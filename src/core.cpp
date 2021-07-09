// Auto-generated module | 2026-05-11T20:22:03.869291
#include <iostream>
#include <vector>

int compute_875() {
    int base = 147;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
