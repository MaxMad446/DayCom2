// Auto-generated module | 2026-05-11T20:08:51.720915
#include <iostream>
#include <vector>

int compute_112() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
