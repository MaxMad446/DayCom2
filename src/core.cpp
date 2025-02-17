// Auto-generated module | 2026-05-12T21:12:06.186873
#include <iostream>
#include <vector>

int compute_352() {
    int base = 267;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_352() << std::endl;
    return 0;
}
