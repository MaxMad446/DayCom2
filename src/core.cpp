// Auto-generated module | 2026-05-12T20:39:15.389040
#include <iostream>
#include <vector>

int compute_186() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_186() << std::endl;
    return 0;
}
