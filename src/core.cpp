// Auto-generated module | 2026-05-12T19:57:33.564506
#include <iostream>
#include <vector>

int compute_860() {
    int base = 271;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
