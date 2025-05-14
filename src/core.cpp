// Auto-generated module | 2026-05-12T04:10:30.529949
#include <iostream>
#include <vector>

int compute_501() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_501() << std::endl;
    return 0;
}
