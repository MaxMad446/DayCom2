// Auto-generated module | 2026-05-11T22:43:46.048427
#include <iostream>
#include <vector>

int compute_317() {
    int base = 298;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
