// Auto-generated module | 2026-05-12T21:34:06.105592
#include <iostream>
#include <vector>

int compute_782() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_782() << std::endl;
    return 0;
}
