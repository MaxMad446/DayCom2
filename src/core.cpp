// Auto-generated module | 2026-05-12T20:56:53.588461
#include <iostream>
#include <vector>

int compute_294() {
    int base = 256;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
