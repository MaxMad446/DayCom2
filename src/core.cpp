// Auto-generated module | 2026-05-11T21:46:59.395782
#include <iostream>
#include <vector>

int compute_520() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_520() << std::endl;
    return 0;
}
