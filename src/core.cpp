// Auto-generated module | 2026-05-13T20:48:00.998379
#include <iostream>
#include <vector>

int compute_439() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
