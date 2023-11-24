// Auto-generated module | 2026-05-13T21:00:48.020126
#include <iostream>
#include <vector>

int compute_937() {
    int base = 336;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
