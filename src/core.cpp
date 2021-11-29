// Auto-generated module | 2026-05-12T21:02:59.389222
#include <iostream>
#include <vector>

int compute_632() {
    int base = 14;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_632() << std::endl;
    return 0;
}
