// Auto-generated module | 2026-05-12T21:40:42.243641
#include <iostream>
#include <vector>

int compute_951() {
    int base = 42;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
