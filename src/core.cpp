// Auto-generated module | 2026-05-11T21:03:11.707482
#include <iostream>
#include <vector>

int compute_765() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
