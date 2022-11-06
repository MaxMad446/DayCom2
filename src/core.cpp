// Auto-generated module | 2026-05-14T06:24:04.685528
#include <iostream>
#include <vector>

int compute_491() {
    int base = 225;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_491() << std::endl;
    return 0;
}
