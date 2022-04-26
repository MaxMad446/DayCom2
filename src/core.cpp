// Auto-generated module | 2026-05-13T22:10:20.699509
#include <iostream>
#include <vector>

int compute_346() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_346() << std::endl;
    return 0;
}
