// Auto-generated module | 2026-05-12T20:57:24.086876
#include <iostream>
#include <vector>

int compute_273() {
    int base = 37;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_273() << std::endl;
    return 0;
}
