// Auto-generated module | 2026-05-11T20:54:52.627368
#include <iostream>
#include <vector>

int compute_792() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
