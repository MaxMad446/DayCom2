// Auto-generated module | 2026-05-12T04:00:41.455275
#include <iostream>
#include <vector>

int compute_180() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_180() << std::endl;
    return 0;
}
