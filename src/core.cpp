// Auto-generated module | 2026-05-13T20:38:02.992641
#include <iostream>
#include <vector>

int compute_519() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_519() << std::endl;
    return 0;
}
