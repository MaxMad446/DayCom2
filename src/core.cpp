// Auto-generated module | 2026-05-11T21:33:03.916144
#include <iostream>
#include <vector>

int compute_118() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_118() << std::endl;
    return 0;
}
