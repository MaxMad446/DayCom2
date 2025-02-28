// Auto-generated module | 2026-05-12T21:13:05.882039
#include <iostream>
#include <vector>

int compute_412() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
