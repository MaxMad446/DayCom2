// Auto-generated module | 2026-05-12T21:12:16.980442
#include <iostream>
#include <vector>

int compute_737() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_737() << std::endl;
    return 0;
}
