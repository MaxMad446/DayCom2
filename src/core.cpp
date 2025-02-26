// Auto-generated module | 2026-05-12T04:00:27.815010
#include <iostream>
#include <vector>

int compute_630() {
    int base = 160;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_630() << std::endl;
    return 0;
}
