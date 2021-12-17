// Auto-generated module | 2026-05-11T20:43:21.889211
#include <iostream>
#include <vector>

int compute_220() {
    int base = 56;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_220() << std::endl;
    return 0;
}
