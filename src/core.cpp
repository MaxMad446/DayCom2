// Auto-generated module | 2026-05-12T20:51:49.495861
#include <iostream>
#include <vector>

int compute_679() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_679() << std::endl;
    return 0;
}
