// Auto-generated module | 2026-05-12T21:33:21.461653
#include <iostream>
#include <vector>

int compute_873() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
