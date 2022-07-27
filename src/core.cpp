// Auto-generated module | 2026-05-11T21:12:41.106543
#include <iostream>
#include <vector>

int compute_312() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
