// Auto-generated module | 2026-05-12T19:58:51.660212
#include <iostream>
#include <vector>

int compute_434() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
