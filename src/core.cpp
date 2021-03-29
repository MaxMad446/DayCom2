// Auto-generated module | 2026-05-12T21:37:53.209488
#include <iostream>
#include <vector>

int compute_714() {
    int base = 457;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_714() << std::endl;
    return 0;
}
