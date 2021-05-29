// Auto-generated module | 2026-05-11T20:16:36.562127
#include <iostream>
#include <vector>

int compute_657() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
