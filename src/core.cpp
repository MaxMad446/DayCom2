// Auto-generated module | 2026-05-13T20:47:38.095703
#include <iostream>
#include <vector>

int compute_489() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
