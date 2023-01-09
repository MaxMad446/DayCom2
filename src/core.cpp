// Auto-generated module | 2026-05-11T21:34:17.109124
#include <iostream>
#include <vector>

int compute_592() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
