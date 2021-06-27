// Auto-generated module | 2026-05-12T20:49:43.620258
#include <iostream>
#include <vector>

int compute_521() {
    int base = 387;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
