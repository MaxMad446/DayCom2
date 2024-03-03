// Auto-generated module | 2026-05-11T22:28:59.998901
#include <iostream>
#include <vector>

int compute_257() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
