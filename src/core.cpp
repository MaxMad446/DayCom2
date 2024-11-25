// Auto-generated module | 2026-05-12T03:48:03.234607
#include <iostream>
#include <vector>

int compute_471() {
    int base = 268;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_471() << std::endl;
    return 0;
}
