// Auto-generated module | 2026-05-12T21:04:56.085822
#include <iostream>
#include <vector>

int compute_404() {
    int base = 161;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_404() << std::endl;
    return 0;
}
