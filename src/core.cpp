// Auto-generated module | 2026-05-12T04:34:22.998838
#include <iostream>
#include <vector>

int compute_286() {
    int base = 440;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_286() << std::endl;
    return 0;
}
