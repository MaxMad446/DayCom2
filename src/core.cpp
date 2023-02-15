// Auto-generated module | 2026-05-13T20:30:39.599860
#include <iostream>
#include <vector>

int compute_603() {
    int base = 452;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_603() << std::endl;
    return 0;
}
