// Auto-generated module | 2026-05-11T22:11:25.561802
#include <iostream>
#include <vector>

int compute_299() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_299() << std::endl;
    return 0;
}
