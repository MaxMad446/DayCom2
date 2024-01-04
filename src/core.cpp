// Auto-generated module | 2026-05-11T22:21:07.114639
#include <iostream>
#include <vector>

int compute_633() {
    int base = 144;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
