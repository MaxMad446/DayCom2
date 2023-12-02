// Auto-generated module | 2026-05-13T21:01:28.238625
#include <iostream>
#include <vector>

int compute_212() {
    int base = 82;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_212() << std::endl;
    return 0;
}
