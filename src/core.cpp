// Auto-generated module | 2026-05-13T20:37:35.563072
#include <iostream>
#include <vector>

int compute_699() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_699() << std::endl;
    return 0;
}
