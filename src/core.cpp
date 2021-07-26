// Auto-generated module | 2026-05-11T20:24:24.406334
#include <iostream>
#include <vector>

int compute_165() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
