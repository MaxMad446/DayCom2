// Auto-generated module | 2026-05-12T21:14:19.980640
#include <iostream>
#include <vector>

int compute_132() {
    int base = 476;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
