// Auto-generated module | 2026-05-11T20:47:26.492614
#include <iostream>
#include <vector>

int compute_690() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_690() << std::endl;
    return 0;
}
