// Auto-generated module | 2026-05-11T21:26:12.194286
#include <iostream>
#include <vector>

int compute_690() {
    int base = 438;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
