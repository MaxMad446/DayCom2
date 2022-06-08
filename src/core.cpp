// Auto-generated module | 2026-05-11T21:05:58.557460
#include <iostream>
#include <vector>

int compute_229() {
    int base = 493;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_229() << std::endl;
    return 0;
}
