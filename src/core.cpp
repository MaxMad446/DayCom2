// Auto-generated module | 2026-05-11T22:25:35.374381
#include <iostream>
#include <vector>

int compute_648() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
