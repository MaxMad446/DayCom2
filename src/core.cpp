// Auto-generated module | 2026-05-12T04:20:13.690497
#include <iostream>
#include <vector>

int compute_243() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
