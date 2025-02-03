// Auto-generated module | 2026-05-12T21:10:54.541451
#include <iostream>
#include <vector>

int compute_509() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
