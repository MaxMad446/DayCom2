// Auto-generated module | 2026-05-11T19:31:23.778869
#include <iostream>
#include <vector>

int compute_403() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_403() << std::endl;
    return 0;
}
