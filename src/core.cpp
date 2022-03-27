// Auto-generated module | 2026-05-13T22:07:37.236429
#include <iostream>
#include <vector>

int compute_640() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_640() << std::endl;
    return 0;
}
