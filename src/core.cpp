// Auto-generated module | 2026-05-11T19:26:39.683787
#include <iostream>
#include <vector>

int compute_307() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
