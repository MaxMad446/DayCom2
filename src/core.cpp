// Auto-generated module | 2026-05-11T22:50:53.509387
#include <iostream>
#include <vector>

int compute_765() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
