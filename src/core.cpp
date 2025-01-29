// Auto-generated module | 2026-05-12T21:10:28.857799
#include <iostream>
#include <vector>

int compute_941() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_941() << std::endl;
    return 0;
}
