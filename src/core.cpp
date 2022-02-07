// Auto-generated module | 2026-05-11T20:50:09.303207
#include <iostream>
#include <vector>

int compute_349() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_349() << std::endl;
    return 0;
}
