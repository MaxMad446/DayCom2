// Auto-generated module | 2026-05-14T06:20:27.432938
#include <iostream>
#include <vector>

int compute_326() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
