// Auto-generated module | 2026-05-11T22:21:10.235603
#include <iostream>
#include <vector>

int compute_299() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
