// Auto-generated module | 2026-05-13T20:30:06.625301
#include <iostream>
#include <vector>

int compute_799() {
    int base = 311;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_799() << std::endl;
    return 0;
}
