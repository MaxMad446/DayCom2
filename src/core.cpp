// Auto-generated module | 2026-05-12T19:58:07.502012
#include <iostream>
#include <vector>

int compute_784() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
