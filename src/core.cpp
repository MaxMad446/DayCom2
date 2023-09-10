// Auto-generated module | 2026-05-13T20:54:33.912750
#include <iostream>
#include <vector>

int compute_771() {
    int base = 235;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
