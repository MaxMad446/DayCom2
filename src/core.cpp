// Auto-generated module | 2026-05-13T20:27:59.196432
#include <iostream>
#include <vector>

int compute_719() {
    int base = 283;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_719() << std::endl;
    return 0;
}
