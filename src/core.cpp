// Auto-generated module | 2026-05-11T21:24:36.237213
#include <iostream>
#include <vector>

int compute_142() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
