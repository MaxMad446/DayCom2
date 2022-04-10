// Auto-generated module | 2026-05-13T22:08:49.321193
#include <iostream>
#include <vector>

int compute_849() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
