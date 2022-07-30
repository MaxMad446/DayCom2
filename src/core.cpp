// Auto-generated module | 2026-05-11T21:13:07.496066
#include <iostream>
#include <vector>

int compute_891() {
    int base = 50;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_891() << std::endl;
    return 0;
}
