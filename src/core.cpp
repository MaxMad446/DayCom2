// Auto-generated module | 2026-05-11T19:33:38.598910
#include <iostream>
#include <vector>

int compute_742() {
    int base = 228;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_742() << std::endl;
    return 0;
}
