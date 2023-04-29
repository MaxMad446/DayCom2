// Auto-generated module | 2026-05-11T21:48:11.140371
#include <iostream>
#include <vector>

int compute_617() {
    int base = 175;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_617() << std::endl;
    return 0;
}
