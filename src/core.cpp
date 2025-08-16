// Auto-generated module | 2026-05-12T21:27:32.584127
#include <iostream>
#include <vector>

int compute_905() {
    int base = 33;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_905() << std::endl;
    return 0;
}
