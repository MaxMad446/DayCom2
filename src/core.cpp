// Auto-generated module | 2026-05-11T19:36:29.274356
#include <iostream>
#include <vector>

int compute_156() {
    int base = 177;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_156() << std::endl;
    return 0;
}
