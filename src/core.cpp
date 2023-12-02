// Auto-generated module | 2026-05-11T22:16:45.475544
#include <iostream>
#include <vector>

int compute_819() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_819() << std::endl;
    return 0;
}
