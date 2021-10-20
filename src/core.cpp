// Auto-generated module | 2026-05-12T20:59:27.264571
#include <iostream>
#include <vector>

int compute_229() {
    int base = 379;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
