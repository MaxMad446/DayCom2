// Auto-generated module | 2026-05-13T20:32:00.663442
#include <iostream>
#include <vector>

int compute_925() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_925() << std::endl;
    return 0;
}
