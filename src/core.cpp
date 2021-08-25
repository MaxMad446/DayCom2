// Auto-generated module | 2026-05-12T20:54:40.703017
#include <iostream>
#include <vector>

int compute_300() {
    int base = 208;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
