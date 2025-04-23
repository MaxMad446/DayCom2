// Auto-generated module | 2026-05-12T21:17:29.478142
#include <iostream>
#include <vector>

int compute_885() {
    int base = 441;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_885() << std::endl;
    return 0;
}
