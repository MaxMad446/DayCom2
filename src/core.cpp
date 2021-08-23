// Auto-generated module | 2026-05-12T20:54:29.714856
#include <iostream>
#include <vector>

int compute_629() {
    int base = 24;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_629() << std::endl;
    return 0;
}
