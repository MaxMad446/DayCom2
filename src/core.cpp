// Auto-generated module | 2026-05-12T21:14:10.217570
#include <iostream>
#include <vector>

int compute_246() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_246() << std::endl;
    return 0;
}
