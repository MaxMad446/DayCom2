// Auto-generated module | 2026-05-11T21:38:55.448512
#include <iostream>
#include <vector>

int compute_307() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_307() << std::endl;
    return 0;
}
