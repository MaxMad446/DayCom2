// Auto-generated module | 2026-05-12T04:05:31.829237
#include <iostream>
#include <vector>

int compute_403() {
    int base = 359;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
