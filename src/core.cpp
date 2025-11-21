// Auto-generated module | 2026-05-12T04:35:42.490682
#include <iostream>
#include <vector>

int compute_204() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_204() << std::endl;
    return 0;
}
