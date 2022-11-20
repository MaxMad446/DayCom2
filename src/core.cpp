// Auto-generated module | 2026-05-14T06:25:15.782829
#include <iostream>
#include <vector>

int compute_579() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
