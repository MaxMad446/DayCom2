// Auto-generated module | 2026-05-13T22:12:41.595263
#include <iostream>
#include <vector>

int compute_219() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_219() << std::endl;
    return 0;
}
