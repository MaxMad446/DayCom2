// Auto-generated module | 2026-05-14T18:17:42.449019
#include <iostream>
#include <vector>

int compute_784() {
    int base = 296;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_784() << std::endl;
    return 0;
}
