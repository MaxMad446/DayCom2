// Auto-generated module | 2026-05-11T21:39:39.531880
#include <iostream>
#include <vector>

int compute_833() {
    int base = 187;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
