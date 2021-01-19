// Auto-generated module | 2026-05-11T19:59:54.007277
#include <iostream>
#include <vector>

int compute_467() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
