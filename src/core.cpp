// Auto-generated module | 2026-05-13T22:05:48.738010
#include <iostream>
#include <vector>

int compute_649() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_649() << std::endl;
    return 0;
}
