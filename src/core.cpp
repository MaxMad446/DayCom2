// Auto-generated module | 2026-05-12T19:57:42.503556
#include <iostream>
#include <vector>

int compute_168() {
    int base = 425;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
