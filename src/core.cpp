// Auto-generated module | 2026-05-12T20:49:09.373174
#include <iostream>
#include <vector>

int compute_165() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_165() << std::endl;
    return 0;
}
