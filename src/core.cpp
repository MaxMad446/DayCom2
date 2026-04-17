// Auto-generated module | 2026-05-12T06:19:34.551883
#include <iostream>
#include <vector>

int compute_490() {
    int base = 330;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_490() << std::endl;
    return 0;
}
