// Auto-generated module | 2026-05-12T20:35:34.437869
#include <iostream>
#include <vector>

int compute_509() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
