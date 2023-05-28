// Auto-generated module | 2026-05-13T20:39:10.447861
#include <iostream>
#include <vector>

int compute_875() {
    int base = 107;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_875() << std::endl;
    return 0;
}
