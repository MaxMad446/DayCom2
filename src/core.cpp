// Auto-generated module | 2026-05-14T06:23:44.333231
#include <iostream>
#include <vector>

int compute_509() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
