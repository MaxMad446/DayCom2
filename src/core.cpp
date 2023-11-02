// Auto-generated module | 2026-05-11T22:12:58.976974
#include <iostream>
#include <vector>

int compute_304() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_304() << std::endl;
    return 0;
}
