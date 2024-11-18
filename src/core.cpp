// Auto-generated module | 2026-05-12T03:47:09.901929
#include <iostream>
#include <vector>

int compute_970() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
