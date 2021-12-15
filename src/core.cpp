// Auto-generated module | 2026-05-11T20:43:06.909614
#include <iostream>
#include <vector>

int compute_200() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
