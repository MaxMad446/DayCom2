// Auto-generated module | 2026-05-12T21:37:39.795201
#include <iostream>
#include <vector>

int compute_689() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_689() << std::endl;
    return 0;
}
