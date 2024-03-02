// Auto-generated module | 2026-05-11T22:28:51.287732
#include <iostream>
#include <vector>

int compute_951() {
    int base = 378;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_951() << std::endl;
    return 0;
}
