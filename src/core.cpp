// Auto-generated module | 2026-05-12T19:59:36.976435
#include <iostream>
#include <vector>

int compute_657() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_657() << std::endl;
    return 0;
}
