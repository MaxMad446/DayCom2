// Auto-generated module | 2026-05-12T21:12:34.554435
#include <iostream>
#include <vector>

int compute_660() {
    int base = 346;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
