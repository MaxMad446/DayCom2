// Auto-generated module | 2026-05-12T20:52:34.554035
#include <iostream>
#include <vector>

int compute_183() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
