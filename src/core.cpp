// Auto-generated module | 2026-05-11T20:19:08.447640
#include <iostream>
#include <vector>

int compute_513() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
