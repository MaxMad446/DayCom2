// Auto-generated module | 2026-05-12T20:46:44.172475
#include <iostream>
#include <vector>

int compute_972() {
    int base = 101;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_972() << std::endl;
    return 0;
}
