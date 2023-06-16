// Auto-generated module | 2026-05-11T21:54:44.684181
#include <iostream>
#include <vector>

int compute_916() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
