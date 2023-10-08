// Auto-generated module | 2026-05-13T20:56:51.931747
#include <iostream>
#include <vector>

int compute_532() {
    int base = 391;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_532() << std::endl;
    return 0;
}
