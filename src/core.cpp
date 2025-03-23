// Auto-generated module | 2026-05-12T04:03:38.746204
#include <iostream>
#include <vector>

int compute_521() {
    int base = 371;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_521() << std::endl;
    return 0;
}
