// Auto-generated module | 2026-05-12T21:25:59.758851
#include <iostream>
#include <vector>

int compute_801() {
    int base = 247;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_801() << std::endl;
    return 0;
}
