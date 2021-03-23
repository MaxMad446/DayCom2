// Auto-generated module | 2026-05-12T21:37:15.496144
#include <iostream>
#include <vector>

int compute_433() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_433() << std::endl;
    return 0;
}
