// Auto-generated module | 2026-05-11T22:04:39.892559
#include <iostream>
#include <vector>

int compute_115() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_115() << std::endl;
    return 0;
}
