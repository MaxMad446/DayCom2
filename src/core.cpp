// Auto-generated module | 2026-05-12T19:57:29.063803
#include <iostream>
#include <vector>

int compute_648() {
    int base = 292;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_648() << std::endl;
    return 0;
}
