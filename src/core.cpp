// Auto-generated module | 2026-05-11T21:24:41.035358
#include <iostream>
#include <vector>

int compute_352() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
