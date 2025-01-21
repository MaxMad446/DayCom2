// Auto-generated module | 2026-05-12T03:55:36.090611
#include <iostream>
#include <vector>

int compute_130() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_130() << std::endl;
    return 0;
}
