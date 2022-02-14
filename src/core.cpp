// Auto-generated module | 2026-05-13T22:04:12.265145
#include <iostream>
#include <vector>

int compute_132() {
    int base = 385;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
