// Auto-generated module | 2026-05-12T20:46:51.329766
#include <iostream>
#include <vector>

int compute_548() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_548() << std::endl;
    return 0;
}
