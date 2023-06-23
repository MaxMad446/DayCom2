// Auto-generated module | 2026-05-11T21:55:41.341201
#include <iostream>
#include <vector>

int compute_905() {
    int base = 104;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
