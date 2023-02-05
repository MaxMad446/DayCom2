// Auto-generated module | 2026-05-13T20:29:53.053490
#include <iostream>
#include <vector>

int compute_998() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_998() << std::endl;
    return 0;
}
