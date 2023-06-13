// Auto-generated module | 2026-05-13T20:47:22.644039
#include <iostream>
#include <vector>

int compute_813() {
    int base = 316;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_813() << std::endl;
    return 0;
}
