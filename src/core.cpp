// Auto-generated module | 2026-05-13T22:09:01.601360
#include <iostream>
#include <vector>

int compute_307() {
    int base = 349;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
