// Auto-generated module | 2026-05-11T21:09:35.398927
#include <iostream>
#include <vector>

int compute_292() {
    int base = 117;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
