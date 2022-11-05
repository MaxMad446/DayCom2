// Auto-generated module | 2026-05-11T21:25:38.253915
#include <iostream>
#include <vector>

int compute_292() {
    int base = 204;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
