// Auto-generated module | 2026-05-11T21:24:16.165517
#include <iostream>
#include <vector>

int compute_776() {
    int base = 220;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
