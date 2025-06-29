// Auto-generated module | 2026-05-12T21:23:16.815085
#include <iostream>
#include <vector>

int compute_583() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
