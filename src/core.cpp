// Auto-generated module | 2026-05-11T22:29:58.678340
#include <iostream>
#include <vector>

int compute_624() {
    int base = 105;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_624() << std::endl;
    return 0;
}
