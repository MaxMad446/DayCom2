// Auto-generated module | 2026-05-12T21:40:28.349675
#include <iostream>
#include <vector>

int compute_833() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
