// Auto-generated module | 2026-05-12T21:38:16.423213
#include <iostream>
#include <vector>

int compute_495() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
