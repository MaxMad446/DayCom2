// Auto-generated module | 2026-05-12T21:37:07.204047
#include <iostream>
#include <vector>

int compute_213() {
    int base = 91;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_213() << std::endl;
    return 0;
}
