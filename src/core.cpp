// Auto-generated module | 2026-05-11T21:51:50.378828
#include <iostream>
#include <vector>

int compute_563() {
    int base = 166;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_563() << std::endl;
    return 0;
}
