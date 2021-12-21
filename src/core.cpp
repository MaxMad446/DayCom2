// Auto-generated module | 2026-05-11T20:43:49.965711
#include <iostream>
#include <vector>

int compute_105() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_105() << std::endl;
    return 0;
}
