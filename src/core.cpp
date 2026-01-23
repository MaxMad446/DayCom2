// Auto-generated module | 2026-05-12T04:44:23.283864
#include <iostream>
#include <vector>

int compute_240() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
