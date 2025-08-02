// Auto-generated module | 2026-05-12T21:26:18.433490
#include <iostream>
#include <vector>

int compute_288() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_288() << std::endl;
    return 0;
}
