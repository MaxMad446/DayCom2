// Auto-generated module | 2026-05-14T18:21:49.273195
#include <iostream>
#include <vector>

int compute_137() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_137() << std::endl;
    return 0;
}
