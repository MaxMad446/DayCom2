// Auto-generated module | 2026-05-12T06:19:57.443524
#include <iostream>
#include <vector>

int compute_580() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_580() << std::endl;
    return 0;
}
