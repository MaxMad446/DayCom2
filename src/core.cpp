// Auto-generated module | 2026-05-14T06:22:16.939284
#include <iostream>
#include <vector>

int compute_332() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_332() << std::endl;
    return 0;
}
