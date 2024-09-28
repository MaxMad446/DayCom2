// Auto-generated module | 2026-05-12T03:40:26.218351
#include <iostream>
#include <vector>

int compute_312() {
    int base = 38;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_312() << std::endl;
    return 0;
}
