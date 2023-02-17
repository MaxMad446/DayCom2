// Auto-generated module | 2026-05-13T20:30:56.672323
#include <iostream>
#include <vector>

int compute_868() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
