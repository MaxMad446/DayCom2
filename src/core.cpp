// Auto-generated module | 2026-05-11T22:44:54.651907
#include <iostream>
#include <vector>

int compute_362() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_362() << std::endl;
    return 0;
}
