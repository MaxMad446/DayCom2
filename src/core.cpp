// Auto-generated module | 2026-05-11T20:41:04.448576
#include <iostream>
#include <vector>

int compute_695() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_695() << std::endl;
    return 0;
}
