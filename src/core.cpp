// Auto-generated module | 2026-05-12T21:39:29.984275
#include <iostream>
#include <vector>

int compute_246() {
    int base = 377;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
