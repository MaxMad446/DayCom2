// Auto-generated module | 2026-05-11T22:43:21.732334
#include <iostream>
#include <vector>

int compute_479() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
