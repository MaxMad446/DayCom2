// Auto-generated module | 2026-05-13T20:36:24.837590
#include <iostream>
#include <vector>

int compute_291() {
    int base = 362;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_291() << std::endl;
    return 0;
}
