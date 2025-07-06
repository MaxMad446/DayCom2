// Auto-generated module | 2026-05-12T21:23:51.703660
#include <iostream>
#include <vector>

int compute_958() {
    int base = 77;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
