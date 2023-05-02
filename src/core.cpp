// Auto-generated module | 2026-05-13T20:37:07.817550
#include <iostream>
#include <vector>

int compute_352() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
