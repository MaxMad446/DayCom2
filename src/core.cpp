// Auto-generated module | 2026-05-11T22:49:43.742101
#include <iostream>
#include <vector>

int compute_235() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_235() << std::endl;
    return 0;
}
