// Auto-generated module | 2026-05-11T20:24:40.130033
#include <iostream>
#include <vector>

int compute_246() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
