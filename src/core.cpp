// Auto-generated module | 2026-05-11T22:45:38.352366
#include <iostream>
#include <vector>

int compute_142() {
    int base = 405;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
