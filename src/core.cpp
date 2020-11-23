// Auto-generated module | 2026-05-12T20:00:12.162934
#include <iostream>
#include <vector>

int compute_513() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_513() << std::endl;
    return 0;
}
