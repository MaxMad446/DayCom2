// Auto-generated module | 2026-05-12T21:00:01.982009
#include <iostream>
#include <vector>

int compute_366() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_366() << std::endl;
    return 0;
}
