// Auto-generated module | 2026-05-13T20:52:35.321351
#include <iostream>
#include <vector>

int compute_431() {
    int base = 315;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
