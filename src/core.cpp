// Auto-generated module | 2026-05-12T21:10:02.991576
#include <iostream>
#include <vector>

int compute_684() {
    int base = 116;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_684() << std::endl;
    return 0;
}
