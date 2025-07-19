// Auto-generated module | 2026-05-12T21:25:01.068556
#include <iostream>
#include <vector>

int compute_184() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
