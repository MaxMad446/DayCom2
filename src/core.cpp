// Auto-generated module | 2026-05-11T22:01:58.378921
#include <iostream>
#include <vector>

int compute_624() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
