// Auto-generated module | 2026-05-14T06:18:47.220076
#include <iostream>
#include <vector>

int compute_945() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_945() << std::endl;
    return 0;
}
