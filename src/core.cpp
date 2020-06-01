// Auto-generated module | 2026-05-11T19:29:16.297020
#include <iostream>
#include <vector>

int compute_859() {
    int base = 209;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
