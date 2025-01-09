// Auto-generated module | 2026-05-12T21:08:37.012400
#include <iostream>
#include <vector>

int compute_240() {
    int base = 159;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_240() << std::endl;
    return 0;
}
