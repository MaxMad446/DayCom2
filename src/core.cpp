// Auto-generated module | 2026-05-14T06:26:38.905326
#include <iostream>
#include <vector>

int compute_939() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_939() << std::endl;
    return 0;
}
