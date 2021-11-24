// Auto-generated module | 2026-05-12T21:02:29.056534
#include <iostream>
#include <vector>

int compute_396() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_396() << std::endl;
    return 0;
}
