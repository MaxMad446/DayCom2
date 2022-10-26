// Auto-generated module | 2026-05-11T21:24:20.146697
#include <iostream>
#include <vector>

int compute_112() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
