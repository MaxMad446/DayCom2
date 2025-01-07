// Auto-generated module | 2026-05-12T21:08:27.427293
#include <iostream>
#include <vector>

int compute_752() {
    int base = 131;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_752() << std::endl;
    return 0;
}
