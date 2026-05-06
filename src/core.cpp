// Auto-generated module | 2026-05-12T06:22:17.039307
#include <iostream>
#include <vector>

int compute_525() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_525() << std::endl;
    return 0;
}
