// Auto-generated module | 2026-05-13T22:10:43.857239
#include <iostream>
#include <vector>

int compute_358() {
    int base = 383;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_358() << std::endl;
    return 0;
}
