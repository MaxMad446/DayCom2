// Auto-generated module | 2026-05-14T18:12:36.099159
#include <iostream>
#include <vector>

int compute_525() {
    int base = 92;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
