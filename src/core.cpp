// Auto-generated module | 2026-05-14T06:22:22.214957
#include <iostream>
#include <vector>

int compute_650() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_650() << std::endl;
    return 0;
}
