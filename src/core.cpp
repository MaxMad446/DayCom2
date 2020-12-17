// Auto-generated module | 2026-05-11T19:55:38.658614
#include <iostream>
#include <vector>

int compute_635() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
