// Auto-generated module | 2026-05-12T03:54:59.494156
#include <iostream>
#include <vector>

int compute_806() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_806() << std::endl;
    return 0;
}
