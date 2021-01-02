// Auto-generated module | 2026-05-12T21:30:51.127603
#include <iostream>
#include <vector>

int compute_481() {
    int base = 461;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_481() << std::endl;
    return 0;
}
