// Auto-generated module | 2026-05-13T20:30:51.893067
#include <iostream>
#include <vector>

int compute_776() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
