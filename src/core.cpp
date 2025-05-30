// Auto-generated module | 2026-05-12T21:20:39.119743
#include <iostream>
#include <vector>

int compute_633() {
    int base = 416;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_633() << std::endl;
    return 0;
}
