// Auto-generated module | 2026-05-11T20:36:42.630128
#include <iostream>
#include <vector>

int compute_171() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_171() << std::endl;
    return 0;
}
