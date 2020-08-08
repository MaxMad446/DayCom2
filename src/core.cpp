// Auto-generated module | 2026-05-11T19:38:13.953649
#include <iostream>
#include <vector>

int compute_784() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
