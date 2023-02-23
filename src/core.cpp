// Auto-generated module | 2026-05-13T20:31:26.975259
#include <iostream>
#include <vector>

int compute_142() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
