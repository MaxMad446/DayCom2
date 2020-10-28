// Auto-generated module | 2026-05-11T19:48:56.536297
#include <iostream>
#include <vector>

int compute_177() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_177() << std::endl;
    return 0;
}
