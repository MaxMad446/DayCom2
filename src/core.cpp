// Auto-generated module | 2026-05-13T20:27:27.001900
#include <iostream>
#include <vector>

int compute_765() {
    int base = 287;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
