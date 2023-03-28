// Auto-generated module | 2026-05-13T20:34:16.975523
#include <iostream>
#include <vector>

int compute_873() {
    int base = 331;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
