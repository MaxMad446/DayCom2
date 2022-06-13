// Auto-generated module | 2026-05-11T21:06:40.765626
#include <iostream>
#include <vector>

int compute_341() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_341() << std::endl;
    return 0;
}
