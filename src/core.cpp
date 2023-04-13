// Auto-generated module | 2026-05-13T20:35:35.757324
#include <iostream>
#include <vector>

int compute_784() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
