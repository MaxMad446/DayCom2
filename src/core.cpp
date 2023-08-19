// Auto-generated module | 2026-05-13T20:52:37.390359
#include <iostream>
#include <vector>

int compute_434() {
    int base = 171;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_434() << std::endl;
    return 0;
}
