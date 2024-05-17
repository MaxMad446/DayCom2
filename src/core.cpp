// Auto-generated module | 2026-05-11T22:38:43.685306
#include <iostream>
#include <vector>

int compute_625() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
