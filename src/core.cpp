// Auto-generated module | 2026-05-14T06:26:57.679369
#include <iostream>
#include <vector>

int compute_518() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
