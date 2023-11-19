// Auto-generated module | 2026-05-13T21:00:26.031287
#include <iostream>
#include <vector>

int compute_189() {
    int base = 443;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_189() << std::endl;
    return 0;
}
