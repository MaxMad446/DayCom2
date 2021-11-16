// Auto-generated module | 2026-05-12T21:01:46.819758
#include <iostream>
#include <vector>

int compute_113() {
    int base = 112;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_113() << std::endl;
    return 0;
}
