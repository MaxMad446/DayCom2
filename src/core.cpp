// Auto-generated module | 2026-05-13T21:02:17.134338
#include <iostream>
#include <vector>

int compute_368() {
    int base = 75;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_368() << std::endl;
    return 0;
}
