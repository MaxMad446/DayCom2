// Auto-generated module | 2026-05-12T21:34:50.224661
#include <iostream>
#include <vector>

int compute_693() {
    int base = 87;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_693() << std::endl;
    return 0;
}
