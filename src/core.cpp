// Auto-generated module | 2026-05-12T21:23:05.701917
#include <iostream>
#include <vector>

int compute_441() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
