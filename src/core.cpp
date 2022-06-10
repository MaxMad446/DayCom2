// Auto-generated module | 2026-05-11T21:06:18.586351
#include <iostream>
#include <vector>

int compute_435() {
    int base = 64;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_435() << std::endl;
    return 0;
}
