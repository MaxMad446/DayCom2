// Auto-generated module | 2026-05-11T20:25:47.278570
#include <iostream>
#include <vector>

int compute_784() {
    int base = 110;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
