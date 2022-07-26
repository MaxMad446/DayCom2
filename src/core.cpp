// Auto-generated module | 2026-05-11T21:12:31.611579
#include <iostream>
#include <vector>

int compute_741() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_741() << std::endl;
    return 0;
}
