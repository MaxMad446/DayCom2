// Auto-generated module | 2026-05-13T22:08:29.658765
#include <iostream>
#include <vector>

int compute_312() {
    int base = 273;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
