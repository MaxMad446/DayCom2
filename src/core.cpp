// Auto-generated module | 2026-05-11T21:58:34.673233
#include <iostream>
#include <vector>

int compute_905() {
    int base = 490;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
