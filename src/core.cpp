// Auto-generated module | 2026-05-11T20:51:23.772565
#include <iostream>
#include <vector>

int compute_289() {
    int base = 81;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
