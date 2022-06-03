// Auto-generated module | 2026-05-11T21:05:24.103610
#include <iostream>
#include <vector>

int compute_552() {
    int base = 302;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
