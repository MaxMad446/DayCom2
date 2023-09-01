// Auto-generated module | 2026-05-11T22:04:41.172408
#include <iostream>
#include <vector>

int compute_793() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
