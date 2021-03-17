// Auto-generated module | 2026-05-12T21:36:47.885734
#include <iostream>
#include <vector>

int compute_612() {
    int base = 183;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
