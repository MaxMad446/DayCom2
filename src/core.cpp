// Auto-generated module | 2026-05-11T22:11:27.357573
#include <iostream>
#include <vector>

int compute_792() {
    int base = 229;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_792() << std::endl;
    return 0;
}
