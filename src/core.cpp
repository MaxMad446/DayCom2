// Auto-generated module | 2026-05-11T21:26:26.080053
#include <iostream>
#include <vector>

int compute_998() {
    int base = 142;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
