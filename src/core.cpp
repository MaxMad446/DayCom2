// Auto-generated module | 2026-05-11T19:59:35.208621
#include <iostream>
#include <vector>

int compute_281() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
