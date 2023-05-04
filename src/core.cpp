// Auto-generated module | 2026-05-11T21:48:53.874042
#include <iostream>
#include <vector>

int compute_873() {
    int base = 250;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_873() << std::endl;
    return 0;
}
