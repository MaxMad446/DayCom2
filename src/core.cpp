// Auto-generated module | 2026-05-12T21:19:19.581525
#include <iostream>
#include <vector>

int compute_868() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
