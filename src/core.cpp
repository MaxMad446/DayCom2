// Auto-generated module | 2026-05-12T20:42:55.404270
#include <iostream>
#include <vector>

int compute_248() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_248() << std::endl;
    return 0;
}
