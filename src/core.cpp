// Auto-generated module | 2026-05-12T20:39:50.953510
#include <iostream>
#include <vector>

int compute_189() {
    int base = 327;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
