// Auto-generated module | 2026-05-11T22:42:36.586485
#include <iostream>
#include <vector>

int compute_272() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_272() << std::endl;
    return 0;
}
