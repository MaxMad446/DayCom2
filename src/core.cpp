// Auto-generated module | 2026-05-11T20:53:06.684599
#include <iostream>
#include <vector>

int compute_540() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_540() << std::endl;
    return 0;
}
