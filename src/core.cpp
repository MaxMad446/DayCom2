// Auto-generated module | 2026-05-11T19:40:45.373460
#include <iostream>
#include <vector>

int compute_555() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_555() << std::endl;
    return 0;
}
