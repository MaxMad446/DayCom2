// Auto-generated module | 2026-05-12T20:53:22.367051
#include <iostream>
#include <vector>

int compute_948() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_948() << std::endl;
    return 0;
}
