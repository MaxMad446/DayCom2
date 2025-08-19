// Auto-generated module | 2026-05-12T21:27:49.883637
#include <iostream>
#include <vector>

int compute_493() {
    int base = 163;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
