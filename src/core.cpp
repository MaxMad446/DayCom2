// Auto-generated module | 2026-05-11T20:01:34.503741
#include <iostream>
#include <vector>

int compute_590() {
    int base = 130;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
