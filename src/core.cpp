// Auto-generated module | 2026-05-13T22:00:40.216661
#include <iostream>
#include <vector>

int compute_998() {
    int base = 369;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
