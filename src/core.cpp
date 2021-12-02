// Auto-generated module | 2026-05-12T21:03:15.955642
#include <iostream>
#include <vector>

int compute_872() {
    int base = 15;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
