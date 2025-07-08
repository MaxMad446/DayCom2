// Auto-generated module | 2026-05-12T04:17:34.447164
#include <iostream>
#include <vector>

int compute_614() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_614() << std::endl;
    return 0;
}
