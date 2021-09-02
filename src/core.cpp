// Auto-generated module | 2026-05-12T20:55:25.717227
#include <iostream>
#include <vector>

int compute_201() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_201() << std::endl;
    return 0;
}
