// Auto-generated module | 2026-05-12T21:00:29.859721
#include <iostream>
#include <vector>

int compute_592() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
