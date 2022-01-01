// Auto-generated module | 2026-05-11T20:45:13.509804
#include <iostream>
#include <vector>

int compute_410() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_410() << std::endl;
    return 0;
}
