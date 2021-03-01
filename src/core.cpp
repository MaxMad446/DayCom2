// Auto-generated module | 2026-05-11T20:05:17.742512
#include <iostream>
#include <vector>

int compute_170() {
    int base = 222;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_170() << std::endl;
    return 0;
}
