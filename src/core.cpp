// Auto-generated module | 2026-05-12T20:54:51.354263
#include <iostream>
#include <vector>

int compute_281() {
    int base = 451;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_281() << std::endl;
    return 0;
}
