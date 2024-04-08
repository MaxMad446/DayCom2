// Auto-generated module | 2026-05-11T22:33:39.530672
#include <iostream>
#include <vector>

int compute_765() {
    int base = 63;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
