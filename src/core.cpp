// Auto-generated module | 2026-05-12T21:19:16.118058
#include <iostream>
#include <vector>

int compute_313() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
