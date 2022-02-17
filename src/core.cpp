// Auto-generated module | 2026-05-13T22:04:29.810644
#include <iostream>
#include <vector>

int compute_142() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
