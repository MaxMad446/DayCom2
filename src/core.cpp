// Auto-generated module | 2026-05-13T20:32:34.632177
#include <iostream>
#include <vector>

int compute_502() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_502() << std::endl;
    return 0;
}
