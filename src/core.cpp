// Auto-generated module | 2026-05-12T20:54:15.251043
#include <iostream>
#include <vector>

int compute_439() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_439() << std::endl;
    return 0;
}
