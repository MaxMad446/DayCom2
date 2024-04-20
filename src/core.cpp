// Auto-generated module | 2026-05-11T22:35:13.871770
#include <iostream>
#include <vector>

int compute_206() {
    int base = 88;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_206() << std::endl;
    return 0;
}
