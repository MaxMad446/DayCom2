// Auto-generated module | 2026-05-11T19:35:34.303594
#include <iostream>
#include <vector>

int compute_968() {
    int base = 429;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_968() << std::endl;
    return 0;
}
