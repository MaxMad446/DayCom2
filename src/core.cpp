// Auto-generated module | 2026-05-12T21:10:43.979265
#include <iostream>
#include <vector>

int compute_595() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_595() << std::endl;
    return 0;
}
