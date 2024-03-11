// Auto-generated module | 2026-05-11T22:29:56.095498
#include <iostream>
#include <vector>

int compute_547() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_547() << std::endl;
    return 0;
}
