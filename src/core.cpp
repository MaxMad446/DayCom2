// Auto-generated module | 2026-05-11T20:16:52.315511
#include <iostream>
#include <vector>

int compute_534() {
    int base = 221;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_534() << std::endl;
    return 0;
}
