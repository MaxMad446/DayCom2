// Auto-generated module | 2026-05-12T04:11:59.848073
#include <iostream>
#include <vector>

int compute_121() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_121() << std::endl;
    return 0;
}
