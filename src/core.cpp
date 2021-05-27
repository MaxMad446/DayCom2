// Auto-generated module | 2026-05-12T20:47:01.288072
#include <iostream>
#include <vector>

int compute_128() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_128() << std::endl;
    return 0;
}
