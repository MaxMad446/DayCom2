// Auto-generated module | 2026-05-12T04:34:35.982256
#include <iostream>
#include <vector>

int compute_849() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_849() << std::endl;
    return 0;
}
