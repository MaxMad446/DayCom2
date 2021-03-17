// Auto-generated module | 2026-05-11T20:07:18.788613
#include <iostream>
#include <vector>

int compute_143() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_143() << std::endl;
    return 0;
}
