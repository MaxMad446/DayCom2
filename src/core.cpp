// Auto-generated module | 2026-05-13T22:12:29.825442
#include <iostream>
#include <vector>

int compute_521() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
