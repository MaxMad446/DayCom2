// Auto-generated module | 2026-05-12T21:18:19.074785
#include <iostream>
#include <vector>

int compute_301() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_301() << std::endl;
    return 0;
}
