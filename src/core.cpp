// Auto-generated module | 2026-05-12T04:24:23.184492
#include <iostream>
#include <vector>

int compute_505() {
    int base = 122;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
