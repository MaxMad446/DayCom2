// Auto-generated module | 2026-05-12T20:55:42.998039
#include <iostream>
#include <vector>

int compute_341() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
