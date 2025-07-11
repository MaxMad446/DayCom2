// Auto-generated module | 2026-05-12T21:24:25.424588
#include <iostream>
#include <vector>

int compute_818() {
    int base = 445;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_818() << std::endl;
    return 0;
}
