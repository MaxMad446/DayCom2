// Auto-generated module | 2026-05-12T04:41:14.093302
#include <iostream>
#include <vector>

int compute_970() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_970() << std::endl;
    return 0;
}
