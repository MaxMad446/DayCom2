// Auto-generated module | 2026-05-11T20:38:03.134282
#include <iostream>
#include <vector>

int compute_254() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
