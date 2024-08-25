// Auto-generated module | 2026-05-11T22:51:36.003565
#include <iostream>
#include <vector>

int compute_949() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
