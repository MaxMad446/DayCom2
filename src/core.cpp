// Auto-generated module | 2026-05-12T20:48:11.354924
#include <iostream>
#include <vector>

int compute_462() {
    int base = 345;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_462() << std::endl;
    return 0;
}
