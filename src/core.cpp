// Auto-generated module | 2026-05-14T18:22:14.007348
#include <iostream>
#include <vector>

int compute_509() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
