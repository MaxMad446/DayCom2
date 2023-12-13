// Auto-generated module | 2026-05-11T22:18:13.406989
#include <iostream>
#include <vector>

int compute_443() {
    int base = 237;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_443() << std::endl;
    return 0;
}
