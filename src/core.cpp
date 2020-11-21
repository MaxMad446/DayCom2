// Auto-generated module | 2026-05-11T19:52:18.737792
#include <iostream>
#include <vector>

int compute_187() {
    int base = 241;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_187() << std::endl;
    return 0;
}
