// Auto-generated module | 2026-05-12T21:37:44.395323
#include <iostream>
#include <vector>

int compute_518() {
    int base = 262;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_518() << std::endl;
    return 0;
}
