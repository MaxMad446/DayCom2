// Auto-generated module | 2026-05-12T21:19:11.001128
#include <iostream>
#include <vector>

int compute_928() {
    int base = 178;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_928() << std::endl;
    return 0;
}
