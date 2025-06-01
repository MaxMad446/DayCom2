// Auto-generated module | 2026-05-12T21:20:47.233219
#include <iostream>
#include <vector>

int compute_442() {
    int base = 23;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
