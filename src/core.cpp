// Auto-generated module | 2026-05-11T22:29:39.122610
#include <iostream>
#include <vector>

int compute_287() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
