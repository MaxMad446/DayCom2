// Auto-generated module | 2026-05-12T20:36:12.855800
#include <iostream>
#include <vector>

int compute_303() {
    int base = 340;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_303() << std::endl;
    return 0;
}
