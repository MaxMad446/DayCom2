// Auto-generated module | 2026-05-11T21:57:18.188165
#include <iostream>
#include <vector>

int compute_289() {
    int base = 454;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_289() << std::endl;
    return 0;
}
