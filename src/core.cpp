// Auto-generated module | 2026-05-12T04:03:30.463393
#include <iostream>
#include <vector>

int compute_611() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
