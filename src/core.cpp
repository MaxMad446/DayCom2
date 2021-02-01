// Auto-generated module | 2026-05-12T21:33:13.625029
#include <iostream>
#include <vector>

int compute_970() {
    int base = 407;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
