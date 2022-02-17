// Auto-generated module | 2026-05-13T22:04:31.766089
#include <iostream>
#include <vector>

int compute_307() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
