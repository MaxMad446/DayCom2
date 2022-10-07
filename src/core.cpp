// Auto-generated module | 2026-05-14T06:21:36.105583
#include <iostream>
#include <vector>

int compute_730() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_730() << std::endl;
    return 0;
}
