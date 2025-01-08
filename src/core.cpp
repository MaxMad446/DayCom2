// Auto-generated module | 2026-05-12T21:08:34.549583
#include <iostream>
#include <vector>

int compute_891() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
