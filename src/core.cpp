// Auto-generated module | 2026-05-12T21:35:35.133287
#include <iostream>
#include <vector>

int compute_743() {
    int base = 397;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_743() << std::endl;
    return 0;
}
