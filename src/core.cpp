// Auto-generated module | 2026-05-11T19:41:29.112085
#include <iostream>
#include <vector>

int compute_258() {
    int base = 123;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_258() << std::endl;
    return 0;
}
