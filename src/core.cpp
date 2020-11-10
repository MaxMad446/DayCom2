// Auto-generated module | 2026-05-12T19:59:07.999938
#include <iostream>
#include <vector>

int compute_697() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_697() << std::endl;
    return 0;
}
