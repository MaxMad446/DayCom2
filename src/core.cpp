// Auto-generated module | 2026-05-11T21:56:13.268033
#include <iostream>
#include <vector>

int compute_488() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
