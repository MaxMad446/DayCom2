// Auto-generated module | 2026-05-11T21:06:53.095759
#include <iostream>
#include <vector>

int compute_206() {
    int base = 462;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
