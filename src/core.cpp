// Auto-generated module | 2026-05-13T20:29:03.033574
#include <iostream>
#include <vector>

int compute_356() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
