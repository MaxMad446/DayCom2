// Auto-generated module | 2026-05-13T21:03:43.742847
#include <iostream>
#include <vector>

int compute_115() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
