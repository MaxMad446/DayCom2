// Auto-generated module | 2026-05-11T20:03:36.871895
#include <iostream>
#include <vector>

int compute_800() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_800() << std::endl;
    return 0;
}
