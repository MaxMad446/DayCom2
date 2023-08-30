// Auto-generated module | 2026-05-11T22:04:24.834504
#include <iostream>
#include <vector>

int compute_441() {
    int base = 145;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_441() << std::endl;
    return 0;
}
