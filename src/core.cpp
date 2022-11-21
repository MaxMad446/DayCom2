// Auto-generated module | 2026-05-11T21:27:46.752596
#include <iostream>
#include <vector>

int compute_132() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_132() << std::endl;
    return 0;
}
