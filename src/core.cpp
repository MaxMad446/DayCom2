// Auto-generated module | 2026-05-12T21:38:03.837345
#include <iostream>
#include <vector>

int compute_729() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_729() << std::endl;
    return 0;
}
