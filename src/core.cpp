// Auto-generated module | 2026-05-12T21:10:38.193564
#include <iostream>
#include <vector>

int compute_614() {
    int base = 244;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
