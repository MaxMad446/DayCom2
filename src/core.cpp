// Auto-generated module | 2026-05-12T04:26:53.445361
#include <iostream>
#include <vector>

int compute_658() {
    int base = 321;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_658() << std::endl;
    return 0;
}
