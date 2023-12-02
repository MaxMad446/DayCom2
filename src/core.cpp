// Auto-generated module | 2026-05-11T22:16:42.156520
#include <iostream>
#include <vector>

int compute_270() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
