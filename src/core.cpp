// Auto-generated module | 2026-05-12T21:24:58.702984
#include <iostream>
#include <vector>

int compute_179() {
    int base = 301;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_179() << std::endl;
    return 0;
}
