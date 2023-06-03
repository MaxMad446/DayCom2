// Auto-generated module | 2026-05-13T20:46:26.447327
#include <iostream>
#include <vector>

int compute_905() {
    int base = 324;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
