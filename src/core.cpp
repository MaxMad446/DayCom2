// Auto-generated module | 2026-05-11T22:22:50.838560
#include <iostream>
#include <vector>

int compute_937() {
    int base = 343;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
