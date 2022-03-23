// Auto-generated module | 2026-05-13T22:07:16.730647
#include <iostream>
#include <vector>

int compute_937() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
