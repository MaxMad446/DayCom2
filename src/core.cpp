// Auto-generated module | 2026-05-12T21:24:39.050406
#include <iostream>
#include <vector>

int compute_786() {
    int base = 118;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_786() << std::endl;
    return 0;
}
