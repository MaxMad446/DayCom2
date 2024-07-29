// Auto-generated module | 2026-05-11T22:48:08.239033
#include <iostream>
#include <vector>

int compute_403() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
