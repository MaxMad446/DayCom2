// Auto-generated module | 2026-05-11T20:35:44.830920
#include <iostream>
#include <vector>

int compute_590() {
    int base = 68;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_590() << std::endl;
    return 0;
}
