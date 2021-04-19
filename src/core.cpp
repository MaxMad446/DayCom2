// Auto-generated module | 2026-05-12T21:39:45.451245
#include <iostream>
#include <vector>

int compute_671() {
    int base = 357;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_671() << std::endl;
    return 0;
}
