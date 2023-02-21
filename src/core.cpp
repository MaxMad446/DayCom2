// Auto-generated module | 2026-05-13T20:31:13.046925
#include <iostream>
#include <vector>

int compute_592() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_592() << std::endl;
    return 0;
}
