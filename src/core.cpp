// Auto-generated module | 2026-05-12T21:23:42.664195
#include <iostream>
#include <vector>

int compute_923() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
