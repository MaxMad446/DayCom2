// Auto-generated module | 2026-05-12T21:38:11.883798
#include <iostream>
#include <vector>

int compute_495() {
    int base = 427;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_495() << std::endl;
    return 0;
}
