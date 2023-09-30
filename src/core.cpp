// Auto-generated module | 2026-05-11T22:08:30.131789
#include <iostream>
#include <vector>

int compute_376() {
    int base = 248;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
