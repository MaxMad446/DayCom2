// Auto-generated module | 2026-05-11T20:17:24.773789
#include <iostream>
#include <vector>

int compute_259() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_259() << std::endl;
    return 0;
}
