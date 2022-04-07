// Auto-generated module | 2026-05-11T20:57:43.005021
#include <iostream>
#include <vector>

int compute_284() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
