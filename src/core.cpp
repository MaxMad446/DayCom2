// Auto-generated module | 2026-05-12T20:57:44.823832
#include <iostream>
#include <vector>

int compute_661() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_661() << std::endl;
    return 0;
}
