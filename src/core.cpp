// Auto-generated module | 2026-05-12T21:37:38.408182
#include <iostream>
#include <vector>

int compute_183() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_183() << std::endl;
    return 0;
}
