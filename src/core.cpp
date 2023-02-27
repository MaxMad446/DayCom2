// Auto-generated module | 2026-05-11T21:40:29.605102
#include <iostream>
#include <vector>

int compute_690() {
    int base = 263;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
