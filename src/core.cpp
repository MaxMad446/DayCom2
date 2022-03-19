// Auto-generated module | 2026-05-13T22:06:56.651674
#include <iostream>
#include <vector>

int compute_198() {
    int base = 496;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_198() << std::endl;
    return 0;
}
