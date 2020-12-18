// Auto-generated module | 2026-05-12T20:02:20.087486
#include <iostream>
#include <vector>

int compute_483() {
    int base = 180;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_483() << std::endl;
    return 0;
}
