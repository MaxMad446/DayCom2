// Auto-generated module | 2026-05-11T22:26:30.070683
#include <iostream>
#include <vector>

int compute_197() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_197() << std::endl;
    return 0;
}
