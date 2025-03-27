// Auto-generated module | 2026-05-12T21:15:13.295247
#include <iostream>
#include <vector>

int compute_479() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_479() << std::endl;
    return 0;
}
