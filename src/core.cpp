// Auto-generated module | 2026-05-11T22:25:12.306847
#include <iostream>
#include <vector>

int compute_494() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
