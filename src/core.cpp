// Auto-generated module | 2026-05-12T21:31:45.932529
#include <iostream>
#include <vector>

int compute_115() {
    int base = 376;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
