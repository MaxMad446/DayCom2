// Auto-generated module | 2026-05-12T21:22:15.142025
#include <iostream>
#include <vector>

int compute_505() {
    int base = 486;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_505() << std::endl;
    return 0;
}
