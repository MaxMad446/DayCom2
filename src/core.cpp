// Auto-generated module | 2026-05-12T21:34:57.739091
#include <iostream>
#include <vector>

int compute_906() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_906() << std::endl;
    return 0;
}
