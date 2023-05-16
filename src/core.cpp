// Auto-generated module | 2026-05-11T21:50:33.068971
#include <iostream>
#include <vector>

int compute_278() {
    int base = 154;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_278() << std::endl;
    return 0;
}
