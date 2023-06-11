// Auto-generated module | 2026-05-13T20:47:16.888902
#include <iostream>
#include <vector>

int compute_357() {
    int base = 304;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_357() << std::endl;
    return 0;
}
