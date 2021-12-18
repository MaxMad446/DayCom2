// Auto-generated module | 2026-05-11T20:43:28.172239
#include <iostream>
#include <vector>

int compute_851() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_851() << std::endl;
    return 0;
}
