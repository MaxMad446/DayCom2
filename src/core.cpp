// Auto-generated module | 2026-05-12T04:34:14.775282
#include <iostream>
#include <vector>

int compute_905() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
