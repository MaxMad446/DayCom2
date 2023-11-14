// Auto-generated module | 2026-05-13T20:59:57.860100
#include <iostream>
#include <vector>

int compute_851() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
