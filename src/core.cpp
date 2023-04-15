// Auto-generated module | 2026-05-13T20:35:39.741958
#include <iostream>
#include <vector>

int compute_301() {
    int base = 151;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
