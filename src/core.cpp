// Auto-generated module | 2026-05-11T21:12:04.510284
#include <iostream>
#include <vector>

int compute_637() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_637() << std::endl;
    return 0;
}
