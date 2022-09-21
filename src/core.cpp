// Auto-generated module | 2026-05-11T21:19:54.690933
#include <iostream>
#include <vector>

int compute_827() {
    int base = 69;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_827() << std::endl;
    return 0;
}
