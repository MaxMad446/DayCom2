// Auto-generated module | 2026-05-12T03:57:14.046808
#include <iostream>
#include <vector>

int compute_552() {
    int base = 219;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_552() << std::endl;
    return 0;
}
