// Auto-generated module | 2026-05-11T22:14:04.527687
#include <iostream>
#include <vector>

int compute_648() {
    int base = 497;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
