// Auto-generated module | 2026-05-11T21:07:24.136569
#include <iostream>
#include <vector>

int compute_775() {
    int base = 278;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_775() << std::endl;
    return 0;
}
