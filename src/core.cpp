// Auto-generated module | 2026-05-11T22:50:03.344307
#include <iostream>
#include <vector>

int compute_607() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_607() << std::endl;
    return 0;
}
