// Auto-generated module | 2026-05-11T20:49:50.577822
#include <iostream>
#include <vector>

int compute_888() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_888() << std::endl;
    return 0;
}
