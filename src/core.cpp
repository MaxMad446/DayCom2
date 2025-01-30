// Auto-generated module | 2026-05-12T21:10:34.955525
#include <iostream>
#include <vector>

int compute_604() {
    int base = 148;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_604() << std::endl;
    return 0;
}
