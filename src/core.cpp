// Auto-generated module | 2026-05-11T20:17:52.217733
#include <iostream>
#include <vector>

int compute_547() {
    int base = 363;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
