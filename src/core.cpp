// Auto-generated module | 2026-05-12T20:39:56.536512
#include <iostream>
#include <vector>

int compute_493() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_493() << std::endl;
    return 0;
}
