// Auto-generated module | 2026-05-11T21:01:01.424042
#include <iostream>
#include <vector>

int compute_739() {
    int base = 137;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_739() << std::endl;
    return 0;
}
