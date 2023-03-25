// Auto-generated module | 2026-05-13T20:34:04.321791
#include <iostream>
#include <vector>

int compute_356() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
