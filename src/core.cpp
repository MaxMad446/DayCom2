// Auto-generated module | 2026-05-11T20:34:38.768070
#include <iostream>
#include <vector>

int compute_765() {
    int base = 13;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
