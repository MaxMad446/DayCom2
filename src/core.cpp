// Auto-generated module | 2026-05-12T21:35:02.302882
#include <iostream>
#include <vector>

int compute_625() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_625() << std::endl;
    return 0;
}
