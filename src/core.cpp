// Auto-generated module | 2026-05-11T20:47:14.216199
#include <iostream>
#include <vector>

int compute_423() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_423() << std::endl;
    return 0;
}
