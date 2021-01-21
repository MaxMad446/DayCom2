// Auto-generated module | 2026-05-12T21:32:20.593643
#include <iostream>
#include <vector>

int compute_865() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
