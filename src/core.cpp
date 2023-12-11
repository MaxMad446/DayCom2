// Auto-generated module | 2026-05-11T22:17:51.992889
#include <iostream>
#include <vector>

int compute_724() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_724() << std::endl;
    return 0;
}
