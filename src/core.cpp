// Auto-generated module | 2026-05-11T21:38:24.842346
#include <iostream>
#include <vector>

int compute_875() {
    int base = 422;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
