// Auto-generated module | 2026-05-11T20:55:59.253041
#include <iostream>
#include <vector>

int compute_523() {
    int base = 415;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_523() << std::endl;
    return 0;
}
