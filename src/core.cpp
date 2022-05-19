// Auto-generated module | 2026-05-13T22:12:14.409610
#include <iostream>
#include <vector>

int compute_578() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_578() << std::endl;
    return 0;
}
