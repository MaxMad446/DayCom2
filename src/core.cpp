// Auto-generated module | 2026-05-11T22:28:44.006432
#include <iostream>
#include <vector>

int compute_215() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_215() << std::endl;
    return 0;
}
