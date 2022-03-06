// Auto-generated module | 2026-05-13T22:05:52.663086
#include <iostream>
#include <vector>

int compute_822() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_822() << std::endl;
    return 0;
}
