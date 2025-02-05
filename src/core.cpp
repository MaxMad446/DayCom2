// Auto-generated module | 2026-05-12T21:11:08.331194
#include <iostream>
#include <vector>

int compute_354() {
    int base = 28;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
