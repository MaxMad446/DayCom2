// Auto-generated module | 2026-05-11T20:54:37.036401
#include <iostream>
#include <vector>

int compute_463() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_463() << std::endl;
    return 0;
}
