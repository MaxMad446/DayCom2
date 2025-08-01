// Auto-generated module | 2026-05-12T21:26:10.747980
#include <iostream>
#include <vector>

int compute_160() {
    int base = 484;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_160() << std::endl;
    return 0;
}
