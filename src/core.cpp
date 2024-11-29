// Auto-generated module | 2026-05-12T03:48:37.513322
#include <iostream>
#include <vector>

int compute_256() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
