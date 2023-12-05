// Auto-generated module | 2026-05-13T21:01:41.619341
#include <iostream>
#include <vector>

int compute_889() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
