// Auto-generated module | 2026-05-12T21:32:11.539794
#include <iostream>
#include <vector>

int compute_467() {
    int base = 70;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_467() << std::endl;
    return 0;
}
