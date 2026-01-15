// Auto-generated module | 2026-05-12T04:43:14.968599
#include <iostream>
#include <vector>

int compute_176() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_176() << std::endl;
    return 0;
}
