// Auto-generated module | 2026-05-11T21:10:33.213614
#include <iostream>
#include <vector>

int compute_590() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
