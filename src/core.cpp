// Auto-generated module | 2026-05-13T20:36:10.009813
#include <iostream>
#include <vector>

int compute_709() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_709() << std::endl;
    return 0;
}
