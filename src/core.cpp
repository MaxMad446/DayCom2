// Auto-generated module | 2026-05-12T21:15:28.424601
#include <iostream>
#include <vector>

int compute_321() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_321() << std::endl;
    return 0;
}
