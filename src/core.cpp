// Auto-generated module | 2026-05-12T04:34:53.664544
#include <iostream>
#include <vector>

int compute_200() {
    int base = 11;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_200() << std::endl;
    return 0;
}
